#include <jni.h>
#include "NitroCalculatorOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::calculator::initialize(vm);
}
