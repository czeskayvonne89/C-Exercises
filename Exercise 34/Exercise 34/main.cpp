//
//  main.cpp
//  Exercise 34
//
//  Created by Joan Campos on 25/09/2019.
//  Copyright © 2019 Czeska Yvonne. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    cout << "Display the current Date and Time:" << endl;
    cout << "----------------------------------" << endl;
    
    time_t t = time (0);
    tm *tPtr = localtime(&t);
    cout << "seconds  = " << (*tPtr).tm_sec << endl;
    cout << "minutes  = " << (*tPtr).tm_min << endl;
    cout << "hours    = " << (*tPtr).tm_hour << endl;
    cout << "day of month  = " << (*tPtr).tm_mday << endl;
    cout << "month of year = " << (*tPtr).tm_mon +1 << endl;
    cout << "year     = " << (*tPtr).tm_year +1900 << endl;
    cout << "weekday  = " << (*tPtr).tm_wday + 1 << endl;
    cout << "day of year   = " << (*tPtr).tm_yday << endl;
    cout << "daylight savings  = " << (*tPtr).tm_isdst << endl;
    
    cout << "Current Date:" << (*tPtr).tm_mday << "/" << (*tPtr).tm_mon+1 << "/" << (*tPtr).tm_year+1900<< endl;
    cout << " Current Time: " << (*tPtr).tm_hour << ":" << (*tPtr).tm_min << ":" << (*tPtr).tm_sec << endl;
              cout << endl;

    
    

    
    
    
    
    
    
    
    
    
    return 0;
}
