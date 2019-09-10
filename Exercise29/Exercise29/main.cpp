//
//  main.cpp
//  Exercise29
//
//  Created by Joan Campos on 08/09/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int divisor, dividend, quotient , remainder;
    
    cout <<"Compute quotient and remainder : " << endl;
    cout <<"---------------------------------" << endl;
    
    cout <<"Input the dividend : ";
    cin>> dividend;
    cout <<"Input the divisor : ";
    cin>> divisor;
    quotient = dividend/divisor;
    cout <<"The quotient of the division is :" << quotient << endl;
    remainder = dividend % divisor;
    cout <<"The remainder of the division is :" <<remainder <<endl;
    
    return 0;
}
