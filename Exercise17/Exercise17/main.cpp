//
//  main.cpp
//  Exercise17
//
//  Created by Joan Campos on 19/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int length;
    int width;
    int area;
    int perimeter;
    
    cout << "Find the Area and the Perimeter of a Rectangle :" << endl;
    cout << "---------------------------------------------- :" << endl;
    cout << "Input the length of the rectangle : ";
    cin >> length;
    cout << "Input the width of the rectangle : ";
    cin >> width;
    area = length*width;
    perimeter = 2*(width+length);
    cout << "The area of the rectangle is : " << area <<endl;
    cout << "The perimeter of the rectangle is : " << perimeter <<endl;
    
    return 0;
}

