//
//  main.cpp
//  Exercise8
//
//  Created by Joan Campos on 10/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int  i1 = 2147483647 ;
    int  i2 = -2147483648 ;
    
    cout <<"Check underflow/overflow during various arithmetical operation:" << endl;
    cout <<"Range of int is [-2147483648, 2147483647]" << endl;
    cout <<"-------------------------------------------------" << endl;
    
    cout << "Overflow the integer range and set in minimum range "<< i1 + 1  <<  endl;
    cout << "Increasing from its minimum range" << i1 + 2 <<endl;
    cout << "Product is " << i1 * i1 << endl;
    cout << "Underflow the range and set in maximum range : " << i2 + 1 << endl;
    cout << "Decreasing from its maximum range : " << i2 - 1 << endl;
    cout << "Product is " <<i2 * i2 << endl;
    
    
    return 0;
}
