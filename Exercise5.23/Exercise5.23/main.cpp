//
//  main.cpp
//  Exercise5.23
//
//  Created by Ryan Guo on 5/22/19.
//  Copyright © 2019 Ryan Guo. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 6; i++){
        for(int j = 9 - i; j > 0; j--){
            cout << " ";
        }
        
        for(int j = 0; j < (i + (i - 1)); j++){
            cout << "*";
        }
        cout << "\n";
    }
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < i + 5; j++){
            cout << " ";
        }
        // 7 - i * 2 倒三角 reverse triangle
        for(int j = 0; j < 7 - i * 2; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
