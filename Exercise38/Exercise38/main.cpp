//
//  main.cpp
//  Exercise38
//
//  Created by Joan Campos on 03/10/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    
    cout <<" Print the multiplication table of a number up to 10 : " << endl;
    cout <<" ------------------------------------------------------" << endl;
    cout <<" Input a number : ";
    cin >> n;
    
    for (int i = 1 ; i <= 10 ; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    

    return 0;
}
