#include "Permission.h"

#include "platform/android/jni/JniHelper.h"

USING_NS_CC;

permissionCallback listener;

void askForPermission(const permissionCallback &callback) {
    listener = callback;
    JniHelper::callStaticVoidMethod("org.cocos2dx.cpp/AppActivity", "askForPermission");
}

bool hasPermission() {
    return JniHelper::callStaticBooleanMethod("org.cocos2dx.cpp/AppActivity", "hasPermission");
}

void returnFromJava(bool granted) {
    if (listener != nullptr) {
        listener(granted);
    }
    listener = nullptr;
}
