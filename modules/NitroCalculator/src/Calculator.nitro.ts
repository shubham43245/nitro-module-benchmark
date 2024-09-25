import type { HybridObject } from "react-native-nitro-modules"

export interface Calculator extends HybridObject<{ android: 'kotlin' }> {
    readonly pi: number
    add(a: number, b: number): number
  }