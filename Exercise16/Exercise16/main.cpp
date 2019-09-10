//
//  main.cpp
//  Exercise16
//
//  Created by Joan Campos on 18/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int rad;
    int cylh;
    double volcyl;
    
    cout << "Calculate the volume of a cylinder : " << endl;
    cout << "-------------------------------------" << endl;
    cout << "Input the radius of the cylinder : ";
    cin >> rad;
    cout << "Input the height of the cylinder : ";
    cin >> cylh;
    volcyl = 3.14*rad*rad*cylh;
    cout << "The volume of a cylinder is " << volcyl << endl;
    
    return 0;
}

