//
//  HybridCalculator.swift
//  react-native-nitro-image
//
//  Created by Marc Rousavy on 10.8.2024
//

import Foundation
import UIKit
import NitroModules

/**
 * Implement `HybridCalculatorSpec` so we can expose this Swift class to JS.
 */
class HybridCalculator : HybridCalculatorSpec {
    var pi: Double = 0.0
    
  public var hybridContext = margelo.nitro.HybridContext()
  public var memorySize: Int {
    return getSizeOf(self)
  }

  public func add(a: Double, b: Double) throws -> Double {
    return a + b
  }
}
