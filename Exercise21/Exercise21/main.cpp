//
//  main.cpp
//  Exercise21
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
    farenheit = 95;
    
    cout << "Convert temperature in Farenheit to Celsius : " << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Input the temperature in Farenheit : ";
    cin >> farenheit;
    
    celsius = (farenheit-32)/1.8;
    
    cout <<" The temperature in Farenheit : " << farenheit << endl;
    cout <<" The temperature in Celsius : " << celsius << endl;
    return 0;
}
