package com.margelo.nitro.calculator

import com.facebook.jni.HybridData
import com.margelo.nitro.HybridObject
import com.margelo.nitro.HybridObjectRegistry
import com.facebook.proguard.annotations.DoNotStrip;

@DoNotStrip
class HybridCalculator : HybridObject() {

    init {
        // Initialize your HybridData
    }

    // Implement the methods defined in your spec
    fun addNumbers(a: Double, b: Double): Double {
        return a + b
    }
}