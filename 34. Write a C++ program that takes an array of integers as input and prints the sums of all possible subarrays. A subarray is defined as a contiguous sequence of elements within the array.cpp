#include <iostream> 
using namespace std; 

// Write a C++ program that takes an array of integers as input and prints the sums of all possible subarrays. A subarray is defined as a contiguous sequence of elements within the array.

// Your task is to implement the printSubarraySums() function, which takes the following parameters:
// arr[]: An array of integers.
// size: The size of the array.

// Your function should print the sums of all possible subarrays of the given array in ascending order.
// You need to implement the function and ensure it works correctly for the provided test cases.


void subArrays(int arr[], int size){

    for(int i=0; i<size; i++){

        int sum = 0;
        for(int j=i; j<size; j++){

            sum += arr[j];
            cout<<sum<<endl;
        }
    }
}

int main() {

    int arr[] = {-1, 2, 3, -4}; 
    
    subArrays(arr, 3);

    return 0; 
}
