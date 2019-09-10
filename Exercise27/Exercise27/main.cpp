//
//  main.cpp
//  Exercise27
//
//  Created by Joan Campos on 26/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    float Celsius, Kelvin;
    cout << " Convert the temperature in Celsius to Kelvin : " << endl;
    cout << " Input the temperature in Celsius : ";
    cin >> Celsius;
    Kelvin = Celsius + 273.15;
    cout << " The temperature in Celsius " << Celsius << endl;
    cout << " The temperature in Kelvin : " << Kelvin << endl;
    
    
    return 0;
}
