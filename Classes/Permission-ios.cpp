#include "Permission.h"

void askForPermission(const permissionCallback &callback) {
    callback(hasPermission);
}

bool hasPermission() {
    return true;
}

void returnFromJava(bool granted) {
    // no function in iOS
}
