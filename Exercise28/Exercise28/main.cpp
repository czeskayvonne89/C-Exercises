//
//  main.cpp
//  Exercise28
//
//  Created by Joan Campos on 08/09/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

int main(int argc, const char * argv[]) {
    
    float side1, side2, ang, area;
    cout <<"Find the area of Scalene Triangle : " << endl;
    cout << "---------------------------------------- " << endl;
    cout<<" Input the length of a side  of the triangle : ";
    cin>>side1;
    cout<<" Input the length of another side  of the triangle : ";
    cin>>side2;
    cout<<" Input the angle between these sides of the triangle : ";
    cin>>ang;
    area = (side1 * side2 * sin((PI/180)*ang))/2;
    cout<<" The area of the Scalene Triangle is : "<< area << endl;
    
    
    return 0;
}


