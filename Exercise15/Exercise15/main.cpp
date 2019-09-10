//
//  main.cpp
//  Exercise15
//
//  Created by Joan Campos on 18/08/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout <<"Calculate the volume of a cube : " << endl;
    int cubeside;
    int cube;
    
    cout << "Input the side of a cube : " << endl;
    cin >> cubeside;
    
    cube = cubeside*cubeside*cubeside;
    cout << "The volume of a cube is : " << cube << endl;
    
    

    
    
    return 0;
}
