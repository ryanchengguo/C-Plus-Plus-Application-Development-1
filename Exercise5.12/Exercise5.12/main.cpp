//
//  main.cpp
//  Exercise5.12
//
//  Created by Ryan Guo on 5/22/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    //print the whole picture is hard, starting from small steps print the first row
    //then hinking how to print first two rows for loop repeat i < 2
    //then find second row's asterisks and blankspaces has to change their conditions based on row number of i in order to print the picture
    //change i < 2 to i < 10 as request.
    for(int i = 0; i < 11; i++){
        
        for(int firstColumnAsterisks = 0; firstColumnAsterisks <= i; firstColumnAsterisks++){
            cout << "*";
        }
        for(int firstColumnBlank = 16 - i; firstColumnBlank > 0; firstColumnBlank--){
            cout << " ";
        }
        for(int secondColumnAsterisks = 10 - i; secondColumnAsterisks > 0; secondColumnAsterisks--){
            cout << "*";
        }
        for(int secondColumnBlank = 0; secondColumnBlank <= i + (i - 1) + 6; secondColumnBlank++){
            cout << " ";
        }
        for(int thirdColumnAsterisks = 10 - i; thirdColumnAsterisks > 0; thirdColumnAsterisks--){
            cout << "*";
        }
        for(int thirdColumnBlank = 16 - i; thirdColumnBlank > 0; thirdColumnBlank--){
            cout << " ";
        }
        for(int fourthcolumnAsterisks = 0; fourthcolumnAsterisks <= i; fourthcolumnAsterisks++){
            cout << "*";
        }
        cout << "\n";
    }
}
    

