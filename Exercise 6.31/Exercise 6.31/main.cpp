//
//  main.cpp
//  Exercise 6.31
//
//  Created by Ryan Guo on 5/26/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
using namespace std;

int GCD(int a, int b);
int gcdRecursive(int a, int b);
int ans, divider, divisor, m;

int main() {
    int num1 = 319;
    int num2 = 377;
    cout << "(" << num1 << " , " << num2 << ")" << " = " << GCD(num1, num2) << "\n";
    cout << "(" << num1 << " , " << num2 << ")" << " = " << gcdRecursive(num1, num2) << "\n";
}

//Euclidean Alogrithm, Euclid's algorithm;
//gcd(a , b) = gcd(b, a mod b);

int gcdRecursive(int a, int b){
    if(a % b == 0){
        return b;
    }
    return GCD(b , a % b);

}

int GCD(int a, int b){

    if(a == b)
        return a;

    if(a > b){
        divider = a;
        divisor = b;
    }else{
        divider = b;
        divisor = a;
    }

    while(divider % divisor != 0){
        m = divider % divisor;
        divisor = m;
    }

    return m;

}
