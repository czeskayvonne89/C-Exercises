//
//  main.cpp
//  Exercise10
//
//  Created by Joan Campos on 11/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double pi = 3.1415926536;
    cout << "Formatting the output: " << endl;
    cout << "-----------------------" << endl;
    
    cout << "The value of pi : " << pi << endl;
    cout << fixed << setprecision(4);
    cout << "The value of pi 4 decimal place of total width 8 : |"<< setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |"<< setw(10) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setfill('-') << setw(8) << pi << "|" <<endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setfill('-') << setw(10) << pi << "|" <<endl;
    cout << scientific;
    cout << "The value of pi in scientific format is : " << pi << endl;
    bool status = 0;
    cout << "Status in number : " << status << endl;
    cout << boolalpha;
    cout << "Status in alphabet : " << status << endl;
    
    
    return 0;
}
