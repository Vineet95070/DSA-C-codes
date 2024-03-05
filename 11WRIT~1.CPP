#include <iostream>
using namespace std;

// Write a C++ program that uses recursion to find the index of the first occurrence of a given key in an array. Implement a recursive function named firstOccurrence that takes an integer array arr, its size size, the current index currentIndex, and the key to search for searchKey as parameters. The function should return the index of the first occurrence of the key or -1 if the key is not present in the array. Ensure the program handles the base case where the array has 0 elements.

int firstOcc(int array[], int size, int i, int key) {

    if(size == key)
        return -1;

    else if(array[i] == key)
    {
        return i;
    }
    
    firstOcc(array, size, i+1, key);
}


// int lastOcc(int array[], int size, int i, int key) {

//     if(size == key)
//         return -1;

//     else if(array[i] == key)
//     {
//         return i;
//     }
    
//     lastOcc(array, size, i-1, key);
// }


int main() {
    int arr[] = {1,2,4,4,5,8,8,1,6};
    
    cout<<firstOcc(arr, 9, 0, 8)<<endl;
    // cout<<lastOcc(arr, 9, 8, 8)<<endl;

    return 0;
}




