//
//  main.cpp
//  Exercise32
//
//  Created by Joan Campos on 19/09/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n=0;
    
    cout << "Check whether a number is positive, negative or zero" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << " Input a number : ";
    cin >> n;
    if(n>0)
    {
        cout << " The entered number is positive.";
    }
    else if(n<0)
    {
        cout << " The entered number is negative.";
    }
    else
    {
        cout << " The number is zero.";
    }
    return 0;
}
