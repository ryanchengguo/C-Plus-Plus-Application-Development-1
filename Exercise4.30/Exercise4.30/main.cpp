//
//  main.cpp
//  Exercise4.30
//
//  Created by Ryan Guo on 5/17/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
//#include <cmath>

using namespace std;

int main(){
    double pi = 3.14159;
    double radius, diameter, circumference, area;
    
    cout << "Enter the radius of a circle: ";
    cin >> radius;
    diameter = radius * 2;
    circumference = pi * diameter;
    //area = pi * pow(radius, 2);
    area = pi * radius *radius;
    
    cout << "Diameter is " << diameter << "\n";
    cout << "Circumference is " << circumference << "\n";
    cout << "Area is " << area << "\n\n";
}
