/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 */

import React from 'react';
import {
  SafeAreaView,
  Text,
  View,
} from 'react-native';
import { NitroCalculator } from './modules/NitroCalculator/src';

function App(): React.JSX.Element {

  const num = NitroCalculator.add(2,3);
  console.log("## Nitro add funciton result ", num)

    return (
      <SafeAreaView>
    <View>
      <Text>Testing Nitro Android Modules {num}</Text>
    </View>
    </SafeAreaView>
  );
}

export default App;
