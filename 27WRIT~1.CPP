#include <iostream>
using namespace std;

// Write a function `reverseArray` that takes an integer array and its size as parameters and reverses the elements of the array in place. Then, in the `main` function, prompt the user to enter elements of an array, call the `reverseArray` function, and output the reversed array.

void revArray(int arr[] ,int size){

    int rev[size];
    for(int i=0, j=size-1; i<size, j>=0; i++, j--){

        rev[i] = arr[j];
        cout<<"rev["<<i<<"] = "<<rev[i]<<endl;
    }
}

int main(){

    int arr[9] = {1,2,3,4,5,6,7,8,9};
    
    revArray(arr, 9);

    return 0;
}



