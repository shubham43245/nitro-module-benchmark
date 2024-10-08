///
/// NitroCalculator-Swift-Cxx-Umbrella.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `HybridCalculatorSpec` to properly resolve imports.
namespace margelo::nitro::calculator { class HybridCalculatorSpec; }

// Include C++ defined types
#include "HybridCalculatorSpec.hpp"
#include <memory>

// C++ helpers for Swift
#include "NitroCalculator-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/PromiseHolder.hpp>

// Forward declarations of Swift defined types
// Forward declaration of `HybridCalculatorSpecCxx` to properly resolve imports.
namespace NitroCalculator { class HybridCalculatorSpecCxx; }

// Include Swift defined types
#if __has_include("NitroCalculator-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "NitroCalculator".
#include "NitroCalculator-Swift.h"
#else
#error NitroCalculator's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "NitroCalculator", and try building the app first.
#endif
