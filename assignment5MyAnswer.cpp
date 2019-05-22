#include <iostream>
#include <stdio.h>
//adding array library to use c++ 11 array<> template
#include <array>

using namespace std;

bool isUnique(int n);

//int nums[10] cstyle array initialization;
//Array nums and int num will be used in function isUnique(), so defined here as global variables;
array<int, 20> nums;
int num;


int main(){
    //count using to count input from 1 to 20 inputs
    //if input bigger than 100 or small then 10 won't count towards total 20 inputs
    int count = 1;
    int n = 0;
    bool unique;
    
    // 1 to 20
    while(count < 21){
        cout << "\nEnter # " << count << " : ";
        cin >> num;
        
        //input out of required range
        if(num < 10 || num > 100){
            cout << "The number entered is not in the valid range of 10 to 100\n";
            continue;
        }
        
        unique = isUnique(num);
        
        //if not existing in array nums, then add it to nums
        if(unique){
            cout << "The number: " << num << " is unique\n";
            nums[n] = num;
            n++;
        }
        count++;
    }
    
    cout << "\n\nThe unique numbers are: \n";
    
    for(int i = 0; i < nums.size(); i++){
        //avoid print empty value (0) in the array
        if(nums[i] != 0){
            //enter newline after print every 5 numbers in the array 5 module 5 equals to 0
            if(i % 5 == 0){
                cout << "\n";
            }
            cout << "    " << nums[i];
        }
    }
    
    cout << "\n\n";
    
}

//isUnique function, check if input value num equals to any value in the array nums
//QUESTION: break is necessary or maybe not?
bool isUnique(int n){
    for(int i=0; i < nums.size(); i++){
        if(nums[i] == num){
            return false;
            break;
        }
    }
    return true;
}
