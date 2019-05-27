//
//  main.cpp
//  Exercise 6.20 Multiples
//
//  Created by Ryan Guo on 5/26/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
using namespace std;

bool isMultiple( int, int ); // function prototype

int main()
{
    int x; // first integer
    int y; // second integer
    
    // loop 3 times
    for ( int i = 1; i <= 3; i++ )
    {
        cout << "Enter two integers: ";
        cin >> x >> y;
        
        // determine if second is multiple of first
        if ( isMultiple( x, y ) )
        {
            cout << y << " is a multiple of " << x << "\n\n";
        }
        else
        {
            cout << y << " is not a multiple of " << x << "\n\n";
        }
    } // end for
    
    cout << endl;
    return 0; // indicate successful termination
} // end main

// multiple determines if b is multiple of a
bool isMultiple( int a, int b )
{
    if(b % a != 0){
        return false;
    }else{
        return true;
    }
//    return !( b % a );
} // end function multiple
