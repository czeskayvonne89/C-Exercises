//
//  main.cpp
//  Exercise22
//
//  Created by Joan Campos on 25/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a,b,c ;
    a = 30;
    b = 60;
    c = 180 - (a+b);
    
    cout << " Find the third angle of a triangle " << endl;
    cout << " ---------------------------------- " << endl;
    cout << " Input the first angle of the triangle : " << endl;
    cin >> a;
    cout << " Input the second angle of the triangle : " << endl;
    cin >> b;
    cout << " The third of the triangle is " << c << endl;
    
    
    
    
    
    return 0;
}
