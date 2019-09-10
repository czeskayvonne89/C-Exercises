//
//  main.cpp
//  Exercise14
//
//  Created by Joan Campos on 18/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int rad;
    float volsphere;
    cout << "Calculate the volume of a sphere : " << endl;
    cout << "-----------------------------------" << endl;
    
    cout << "Input the radius of a sphere : ";
    cin >> rad;
    volsphere = (4*3.14*rad*rad*rad)/3 ;
    cout << "The volume of a sphere is " << volsphere << endl;
    

    
    
    return 0;
}
