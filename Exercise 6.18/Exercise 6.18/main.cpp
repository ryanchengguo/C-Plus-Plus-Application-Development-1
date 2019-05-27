//
//  main.cpp
//  Exercise 6.18
//
//  Created by Ryan Guo on 5/25/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>

using namespace std;

int integerPower(int base, int exponent);
//int ans;

int main(){
    int base = 2;
    int exponent = 3;
    cout << integerPower(base, exponent) << "\n";
}

int integerPower(int base, int exponent){
    
    if(exponent == 1){
        return base;
    }
    
        return base * integerPower(base, exponent - 1);
    

}
