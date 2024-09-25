import { NitroModules } from "react-native-nitro-modules";
import type { Calculator } from "./Calculator.nitro";

export const NitroCalculator = NitroModules.createHybridObject<Calculator>("Calculator")