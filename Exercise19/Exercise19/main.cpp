//
//  main.cpp
//  Exercise19
//
//  Created by Joan Campos on 21/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;
#define pi 3.14159


int main(int argc, const char * argv[]) {
    // insert code here...
    float circumference , area;
    float radius;
    
    cout << "Find the area and circumference of any circle : " << endl;
    cout << "--------------------------------------------- " << endl;
    
    cout << "Input the radius (1/2 of diameter) of a circle : ";
    cin >> radius;
    
    area = pi*(radius*radius);
    circumference = 2*pi*radius;
    
    cout << "The area of the circle is : " << area << endl;
    cout << "The circumference of the circle is : " << circumference << endl;
    
    
    
    
    
    
    return 0;
}
