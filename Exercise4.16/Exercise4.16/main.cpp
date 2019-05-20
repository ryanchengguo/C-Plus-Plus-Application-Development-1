//
//  main.cpp
//  Exercise4.16
//
//  Created by Ryan Guo on 5/17/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float hr, rate;
    
    cout << "Enter hours worked (-1 to end): ";
    cin >> hr;
    
    while(hr != -1){
        
        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> rate;
        
        if(hr > 40){
            cout << "Salary is $" << setprecision(2) << fixed << rate * 40 + 1.5 * rate * (hr - 40) << "\n";
        }else{
            cout << "Salary is $" << setprecision(2) << fixed << rate * hr << "\n\n";
        }
        
        cout << "\nEnter hours worked (-1 to end): ";
        cin >> hr;
        
    }
}
