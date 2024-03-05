#include <iostream>
using namespace std;

// Write a C++ program to determine whether a given array of integers is sorted in ascending order. Implement a recursive function named isSorted that takes an integer array n and its size as parameters. The function should return a boolean value indicating whether the array is sorted. Ensure the program handles the base case where the array has 0 or 1 element, considering it as sorted. 
bool isSoted(int n[], int size) {

    if (size == 1) {
        return true;
    }

    bool restArr = isSoted(n+1, size-1);
    
    return restArr && n[0]<n[1];
}

int main() {
    int arr[] = {1,2,4,4,5,6};
    int tf = isSoted(arr, 6);

    if(tf)
        cout<<"Shorted:";
    else
        cout<<"Not Shorted:";

    return 0;
}




