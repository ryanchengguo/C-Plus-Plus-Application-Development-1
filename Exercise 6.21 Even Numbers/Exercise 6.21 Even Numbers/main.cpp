//
//  main.cpp
//  Exercise 6.21 Even Numbers
//
//  Created by Ryan Guo on 5/26/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
using namespace std;
bool evenNumber(int );

int main() {
    int x; // current input
    
    // loop for 3 inputs
    for ( int i = 1; i <= 3; i++ )
    {
        cout << "Enter an integer: ";
        cin >> x;
        
        // determine if input is even
        if ( evenNumber( x ) )
        {
            cout << x << " is an even integer\n\n";
        }
        else
        {
            cout << x << " is an odd integer\n\n";
        }
    } // end for
    
    cout << endl;
    return 0;  //
}

bool evenNumber(int num){
    if(num % 2 != 0){
        return false;
    }else{
        return true;
    }
    //   return !( a % 2 );

    
}
