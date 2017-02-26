#include "Permission.h"

void askForPermission(const permissionCallback &callback) {
    callback(true);
}

bool hasPermission() {
    return true;
}

void returnFromJava(bool granted) {
    // no function on desktop
}
