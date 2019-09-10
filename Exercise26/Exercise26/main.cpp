//
//  main.cpp
//  Exercise26
//
//  Created by Joan Campos on 26/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    float Farenheit, Kelvin;
    
    cout << "Convert the temperature in Farenheit to Kelvin " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Input the temperature in Farenheit : ";
    cin >> Farenheit;
    Kelvin = (Farenheit+459.67)*5/9;
    cout << "The temperature in Farenheit is " << Farenheit << endl;
    cout << "The temperature in Kelvin is " << Kelvin << endl;
    
    return 0;
}
