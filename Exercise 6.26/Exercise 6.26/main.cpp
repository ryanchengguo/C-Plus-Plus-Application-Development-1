//
//  main.cpp
//  Exercise 6.26
//
//  Created by Ryan Guo on 5/25/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

double celsius(double f);
double fahrenheit(double c);

int main() {
    cout << fixed << setprecision(1);
    
    cout << setw(5) << "Celsius" << setw(24) << "Fabrenbeit" << setw(17) << "Celsius" << setw(22) << "Fabrenbeit" << "\n\n";

    for(double i = 1; i < 51; i++){
        cout << setw(5) << i - 1 << setw(20) << fahrenheit(i - 1) << setw(20) << i + 50 << setw(20) << fahrenheit(i + 50) << "\n";
    }
    
    cout << "\n\n\n";
    cout << setw(5) << "Fabrenbeit" << setw(18) << "Celsius" << setw(22) << "Fabrenbeit" << setw(17) << "Celsius" << "\n\n";
    
    for(double i = 32; i < 107; i++){
        cout << setw(5) << i << setw(20) << celsius(i) << setw(20) << i + 106 << setw(20) << celsius(i + 106) << "\n";
    }
    
}

//5 and 9 should be 5.0 and 9.0 convert to double. otherwise 5 / 9 = 0 <------------
double celsius(double f){
    return (f - 32.0) * (5.0 / 9.0);
}

double fahrenheit(double c){
    return (c * 9.0 / 5.0) + 32.0;
}
