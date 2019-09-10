//
//  main.cpp
//  Exercise9
//
//  Created by Joan Campos on 11/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...\
    
    cout << "Display the operation of pre and post increment and decrement" << endl;
    cout << "-------------------------------------------------------------" << endl;
    
    int num = 57;
    
    cout << "The number is : "<< num << endl;
    num++;
    cout << "After post increment by 1 the number is : " << num << endl;
    ++num;
    cout << "After pre increment by 1 the number is : " << num << endl;
    ++num + 1;
    cout << "After increasing by 1 the number is : " << num << endl;
    num--;
    cout << "After post decrement by 1 the number is : " << num << endl;
    --num;
    cout << "After pre decrement by 1 the number is : " << num << endl;
    --num - 1;
    cout << "After decreasing by 1 the number is : " << num << endl;
    
    
    
    return 0;
}
