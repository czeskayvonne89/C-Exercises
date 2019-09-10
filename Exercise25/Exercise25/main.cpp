//
//  main.cpp
//  Exercise25
//
//  Created by Joan Campos on 26/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    float Kelvin, Celsius;
    
    cout << " Convert the temperature in Kelvin to Celsius " << endl;
    cout << "----------------------------------------------" << endl;
    cout << " Input the temperature in Kelvin : ";
    cin >> Kelvin;
    Celsius = Kelvin - 273.15;
    cout << " The temperature in Kelvin is " << Kelvin << endl;
    cout <<" The temperature in Celsius is : " << Celsius << endl;
    
    return 0;
}
