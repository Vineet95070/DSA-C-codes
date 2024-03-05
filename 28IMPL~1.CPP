#include <iostream>
using namespace std;

// Implement a sorting algorithm in a function called `sortArray` that takes an integer array and its size as parameters and sorts the array in ascending order. Then, in the `main` function, prompt the user to enter elements of an array, call the `sortArray` function, and output the sorted array.

void sortArray(int arr[], int size){

    for(int i=0; i<size; i++){

        for(int j=i; j<size; j++){
            
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){

    int arr[9] = {61,29,03,65,46,97,80,39};
    
    sortArray(arr, 9);
    int i=0;
    while(i<9){
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
        i++;
    }

    return 0;
}



