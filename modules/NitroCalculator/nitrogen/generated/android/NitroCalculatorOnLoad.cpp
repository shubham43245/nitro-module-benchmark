///
/// NitroCalculatorOnLoad.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroCalculatorOnLoad.hpp"

#include <jni.h>
#include <fbjni/fbjni.h>
#include <NitroModules/HybridObjectRegistry.hpp>

#include "JHybridCalculatorSpec.hpp"
#include <NitroModules/JNISharedPtr.hpp>

namespace margelo::nitro::calculator {

int initialize(JavaVM* vm) {
  using namespace margelo::nitro;
  using namespace margelo::nitro::calculator;
  using namespace facebook;

  return facebook::jni::initialize(vm, [] {
    // Register native JNI methods
    margelo::nitro::calculator::JHybridCalculatorSpec::registerNatives();

    // Register Nitro Hybrid Objects
    HybridObjectRegistry::registerHybridObjectConstructor(
      "Calculator",
      []() -> std::shared_ptr<HybridObject> {
        static auto javaClass = jni::findClassStatic("com/margelo/nitro/calculator/HybridCalculator");
        static auto defaultConstructor = javaClass->getConstructor<JHybridCalculatorSpec::javaobject()>();
    
        auto instance = javaClass->newObject(defaultConstructor);
    #ifdef NITRO_DEBUG
        if (instance == nullptr) [[unlikely]] {
          throw std::runtime_error("Failed to create an instance of \"JHybridCalculatorSpec\" - the constructor returned null!");
        }
    #endif
        auto globalRef = jni::make_global(instance);
        return JNISharedPtr::make_shared_from_jni<JHybridCalculatorSpec>(globalRef);
      }
    );
  });
}

} // namespace margelo::nitro::calculator
