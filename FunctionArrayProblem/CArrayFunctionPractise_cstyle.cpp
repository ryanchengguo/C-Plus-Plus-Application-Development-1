// The purpose of this program is to provide a way for the student to practise passing
// arrays to functions and have those functions perform some relatively simple tasks.

// You will need to fill in the missing statements that invoke the functions and the
// implementations of the 6 functions. Each function can be implemented in 4 to 7 lines
// of code {not including opening and closing braces}.

// Created by: Bob Langelaan
// Date:       July 1, 2018

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

const unsigned int SIZE1 = 10;
const unsigned int SIZE2 = 15;

// Function prototypes

// Search array and return the max value in the array
int arr_max(const int a[], size_t n);

// Search array and return the index of the max value in the array
size_t arr_index_of_first_max(const int a[], size_t n);

// Search array and return the index of the last max value in the array
size_t arr_index_of_last_max(const int a[], size_t n);

// Search array and return index of first occurence of value in the array
// Return -1 if value is not in the array
int arr_index_of_value_first(const int a[], size_t n, int value);

// Search array and return index of last occurence of value in the array
// Return -1 if value is not in the array
int arr_index_of_value_last(const int a[], size_t n, int value);

// Compare 2 arrays and return true if they are equal and false otherwise
// You can assume that the 2 arrays are the same size
bool arr_compare(const int a[], const int b[], size_t n);

int main()
{
	int arr1[SIZE1] = { 10, 20, 75, 15, 35, 12, 65, 15, 75, 55};
	int arr2[SIZE1] = { 10, 20, 75, 15, 35, 12, 65, 15, 75, 55 };
	int arr3[SIZE1] = { 10, 20, 75, 15, 100, 12, 65, 15, 75, 55 };

	size_t result = 0; // used to collect result from function returning a size_t value
	int result2 = 0;  // used to collect result from function returning an int value
	bool result3 = false; // used to collect result from function returning a bool value

	// Test arr_max() function
	result2 = arr_max(arr1, SIZE1); // I am providing the first invocation, you supply the rest :)
	cout << "The max value in the array \"arr1\" is: " << result2;

	// Test arr_index_of_first_max() function
    result = arr_index_of_first_max(arr1, SIZE1);
	cout << "\n\nThe index of the first max value in the array \"arr1\" is: " << result;

	// Test arr_index_of_last_max() function
	result = arr_index_of_last_max(arr1, SIZE1);
	cout << "\n\nThe index of the last max value in the array \"arr1\" is: " << result;

	// Test arr_index_of_value_first() function
    result2 = arr_index_of_value_first(arr1, SIZE1, 15);
	cout << "\n\nThe index of the first occurrence of 15 in the array \"arr1\" is: " << result2;
    result2 = arr_index_of_value_first(arr1, SIZE1, 100);
	cout << "\nThe index of the first occurrence of 100 in the array \"arr1\" is: " << result2;

	// Test arr_index_of_value_last() function
    result2 = arr_index_of_value_last(arr1, SIZE1, 15);
	cout << "\n\nThe index of the last occurrence of 15 in the array \"arr1\" is: " << result2;
	result2 = arr_index_of_value_last(arr1, SIZE1, 100);
	cout << "\nThe index of the last occurrence of 100 in the array \"arr1\" is: " << result2;

	// Test arr_compare() function
    result3 = arr_compare(arr1, arr2, SIZE1);
	if (result3)
	{
		cout << "\n\nThe arrays \"arr1\" and \"arr2\" are equal.";
	}
	else
	{
		cout << "\n\nThe arrays \"arr1\" and \"arr2\" are NOT equal.";
	}

	
	if (result3)
	{
		cout << "\n\nThe arrays \"arr1\" and \"arr3\" are equal.\n\n";
	}
	else
	{
		cout << "\n\nThe arrays \"arr1\" and \"arr3\" are NOT equal.\n\n";
	}

	system("pause");
}

// Search array and return the max value in the array
int arr_max(const int a[], size_t n)
{
    int maxValue = a[0];
    for(size_t i = 1; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    return maxValue;
}

// Search array and return the index of the max value in the array
size_t arr_index_of_first_max(const int a[], size_t n)
{
    int maxValue = a[0];
    size_t index =0;
    for(size_t i = 1; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
            index = i;
        }
    }
    return index;
}

// Search array and return the index of the last max value in the array
size_t arr_index_of_last_max(const int a[], size_t n)
{
    int maxValue = a[0];
    size_t index = 0;
    for(size_t i = 1; i < n; i++){
        if(a[i] >= maxValue && i > index){
            maxValue = a[i];
            index = i;
        }
    }
    return index;
}

// Search array and return index of first occurence of value in the array
// Return -1 if value is not in the array
int arr_index_of_value_first(const int a[], size_t n, int value)
{
    for(size_t i = 0; i < n; i++){
        if(a[i] == value){
            return i;
        }
    }
    
    return -1;
}

// Search array and return index of last occurence of value in the array
// Return -1 if value is not in the array
int arr_index_of_value_last(const int a[], size_t n, int value)
{
    //function has to return size_t, index use type int, int -> size_t (unsigned int) avoid program fail;
    int index = -1;
    for (unsigned int i = 0; i < n; ++i)
    {
        if (a[i] == value)
        {
            //compiler won't conpile unsigned int i convert to int, implicit conversion unsigned int to int (large to small);
            index = i;
        }
    }
    
    return index;
	
}

// Compare 2 arrays and return true if they are equal (1) and false (0) otherwise
// You can assume that the 2 arrays are the same size
bool arr_compare(const int a[], const int b[], size_t n)
{
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}


