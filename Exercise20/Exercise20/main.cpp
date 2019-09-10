//
//  main.cpp
//  Exercise20
//
//  Created by Joan Campos on 25/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int celsius;
    int farenheit;
    celsius = 35;
    
    cout << "Convert temperature in Celsius to Farenheit : " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Input the temperature in Celsius : ";
    cin >> celsius;
    
    farenheit = (celsius*1.8)+32;
    
    cout <<" The temperature in Celsius : " << celsius << endl;
    cout <<" The temperature in Farenheit : " << farenheit << endl;
    
    
    
    
    return 0;
}
