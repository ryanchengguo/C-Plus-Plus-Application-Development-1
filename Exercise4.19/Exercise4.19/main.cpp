//
//  main.cpp
//  ExerciseCH4CH5
//
//  Created by Ryan Guo on 5/17/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sal, wage = 200;
    
    while(1){
        cout << "\nEnter sales in dollars (-1 to end): ";
        cin >> sal;
        if(sal == -1){
            break;
        }
        cout << "Salary is: " << setprecision(2) << fixed << wage + sal * 0.09 << "\n";
    }
    
}
