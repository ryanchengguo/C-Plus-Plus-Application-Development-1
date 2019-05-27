//
//  main.cpp
//  Exercise 6.51 Function Template minimum
//
//  Created by Ryan Guo on 5/26/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
using namespace std;

template < class T>
T minimum( T value1, T value2 ){
    if (value1 < value2){
        return value1;
    }else{
        return value2;
    }
}
int main() {
    // demonstrate minimum with int values
    int int1; // first int value
    int int2; // second int value
    
    cout << "Input two integer values: ";
    cin >> int1 >> int2;
    
    // invoke int version of minimum
    cout << "The smaller integer value is: " << minimum( int1, int2 );
    
    // demonstrate minimum with char values
    char char1; // first char value
    char char2; // second char value
    
    cout << "\n\nInput two characters: ";
    cin >> char1 >> char2;
    
    // invoke char version of minimum
    cout << "The smaller character value is: " << minimum( char1, char2 );
    
    // demonstrate minimum with double values
    double double1; // first double value
    double double2; // second double value
    
    cout << "\n\nInput two double values: ";
    cin >> double1 >> double2;
    
    // invoke double version of minimum
    cout << "The smaller double value is: " << minimum( double1, double2 )
    << '\n' << endl;
    
    system ("pause");
    
    return 0; // indicate successful termination
}
