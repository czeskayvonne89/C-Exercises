//
//  main.cpp
//  Exercise24
//
//  Created by Joan Campos on 25/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    float Kelvin;
    float Farenheit;
    
    cout << "Convert temperature in Kelvin to Farenheit : " << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Input the temperature in Kelvin : " ;
    cin >> Kelvin;
    Farenheit = (Kelvin*1.8) - 459.67;
    cout << " The temperature in Kelvin : " << Kelvin << endl;
    cout << " The temperature in Farenheit : "<< Farenheit << endl;
    
    return 0;
}
