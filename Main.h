#pragma once
#include "jni/jni.h"
#include <Windows.h>
#include <iostream>

class Main
{
public:
	JavaVM* vm;
	JNIEnv* env;
	JavaVMInitArgs vm_args;
} mc;

void run();


