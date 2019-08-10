//
//  main.cpp
//  Exercise6
//
//  Created by Joan Campos on 10/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout <<"Check whether the primitive values crossing the limits or not :"<< endl;
    cout <<"---------------------------------------------------------------"<< endl;
    
    char gender = 'F' ;
    bool isMarried = true;
    int numofSons = 2 ;
    short int YearofAppt = 2009 ;
    unsigned int YearlySalary= 1500000 ;
    float height = 79.48f ;
    float gpa = 4.69f ;
    int Salarydrawn = 12047235 ;
    long int  Balancetill = 995324987;
    
    cout << " The Gender is :" << gender << endl;
    cout << " Is she married? : " << isMarried << endl;
    cout << " Number of sons she has : " << numofSons << endl;
    cout << " Year of her appointment : " << YearofAppt << endl;
    cout << " Salary for a year : " << YearlySalary << endl;
    cout << " Height is: " << height << endl;
    cout << " GPA is : " << gpa << endl;
    cout << " Salary drawn up to : " << Salarydrawn << endl;
    cout << " Balance till : " << Balancetill << endl;

    return 0;
}
