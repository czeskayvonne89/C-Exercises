//
//  main.cpp
//  Exercise30
//
//  Created by Joan Campos on 10/09/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    float n1,n2,n3,n4, sum, average;
    
    cout <<"Compute the total and average of four numbers."<<endl;
    cout <<"----------------------------------------------"<<endl;
    cout <<"Input first two numbers (separated by space) : ";
    cin >> n1 >> n2;
    cout <<"Input the last two numbers (separated by space) :";
    cin >> n3 >> n4;
    sum = n1+n2+n3+n4;
    cout <<"The total of four numbers is :" << sum << endl;
    average = sum/4;
    cout <<"The average of four numbers is : " << average <<endl;
    
    
    
    
    
    return 0;
}
