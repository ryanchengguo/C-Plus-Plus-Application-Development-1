#include <iostream>
#include <stdio.h>
#include <array>

using namespace std;

bool isUnique(int n);



int main(){
    
   while(count < 11){
    cout << "\nEnter # " << count << " : ";
    cin >> num;
    if(num < 10 || num > 100){
      cout << "The number entered is not in the valid range of 10 to 100\n";
      count++;
      continue;
    }

    thisindex = isUnique(num);

    if(thisindex){
        cout << "The number: " << num << " is unique\n\n";
        nums[n] = num;
        n++;
    }else{
        cout << "\n";
    }
  count++;
   }

  cout << "The unique numbers are: \n";

   for(int i = 0; i < 10; i++){
     if(nums[i] != 0){
       if(i % 5 == 0){
           cout << "\n";
       }
      cout << "    " << nums[i];
     }
   }
   
}

bool isUnique(int n){
  for(int i=0; i<10; i++){
        if(nums[i] == num){
          return false;
            break;
        }
    }
    return true;
}
