#pragma once

#include <functional>

typedef std::function<void(int granted)> permissionCallback;

void askForPermission(const permissionCallback &callback);

bool hasPermission();

void returnFromJava(bool granted);
