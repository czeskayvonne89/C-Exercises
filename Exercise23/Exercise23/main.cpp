//
//  main.cpp
//  Exercise23
//
//  Created by Joan Campos on 25/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int kph;
    float mph;
    kph = 25;
    mph = kph*0.6213711922 ;
    
    cout << "Convert kilometers per hour to miles per hour :" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Input the distance in kilometer : ";
    cin >> kph;
    cout << " The " << kph << " Km./hr. means " << mph <<"  Miles/hr. " << endl;

    
    
    return 0;
}
