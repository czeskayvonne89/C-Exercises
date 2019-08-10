//
//  main.cpp
//  Exercise7
//
//  Created by Joan Campos on 10/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout <<"Display arithmetic operations with mixed data type :" <<endl;
    cout <<"----------------------------------------------------" <<endl;
    
    int n1 = 5;
    int n2 = 7;
    double d1= 3.7;
    double d2 = 8.0;
    
    cout << fixed << setprecision(1);
    
    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    cout << d1 << " + " << d2 << " = " << d1 + d2 << endl;
    cout << n1 << " + " << d2 << " = " << n1 + d2 << endl;
    cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    cout << d1 << " - " << d2 << " = " << d1 - d2 << endl;
    cout << n1 << " - " << d2 << " = " << n1 - d2 << endl;
    cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    cout << d1 << " * " << d2 << " = " << d1 * d2 << endl;
    cout << n1 << " * " << d2 << " = " << n1 * d2 << endl;
    cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
    cout << d1 << " / " << d2 << " = " << d1 / d2 << endl;
    cout << n1 << " / " << d2 << " = " << n1 / d2 << endl;
    
    
    return 0;
}
