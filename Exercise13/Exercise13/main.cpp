//
//  main.cpp
//  Exercise13
//
//  Created by Joan Campos on 18/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1 = 25 , num2 = 39 , temp;
    cout << "Swap 2 numbers: " << endl;
    cout << "----------------" << endl;
    cout << " Input 1st number : ";
    cin >> num1;
    cout << " Input 2nd number : ";
    cin >> num2;
    temp = num2;
    num2 = num1;
    num1 = temp;
    cout << "After swapping the 1st number is : " << num1 << endl;
    cout << "After swapping the 2nd number is : " << num2 << endl;
    
    
    
    
    
    
    return 0;
}
