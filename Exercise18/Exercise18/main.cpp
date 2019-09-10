//
//  main.cpp
//  Exercise18
//
//  Created by Joan Campos on 19/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    float len1, len2,len3;
    float s;
    float area;

    cout << "Find the area of any triangle using Heron's formula : " << endl;
    cout << "------------------------------------------------ : " << endl;
    cout << "Input the length of 1st side of the triangle : ";
    cin >> len1;
    cout << "Input the length of 2nd side of the triangle : ";
    cin >> len2;
    cout << "Input the length of 3rd side of the triangle : ";
    cin >> len3;
    s = (len1+len2+len3)/2;
    area = sqrt(s*(s-len1)*(s-len2)*(s-len3));
    cout << "The area of the triangle is : " << area << endl;
    
    
    
    
    return 0;
}
