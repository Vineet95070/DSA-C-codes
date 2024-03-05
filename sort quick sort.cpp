#include <iostream>
using namespace std;

void swap(int arr[], int i, int j){

    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int start, int end){

    int pivot = arr[end];
    int i = start-1;

    for(int j=start; j<end; j++){
        if(arr[j]<pivot){

            swap(arr, ++i,j);
        }
    }
    swap(arr, i+1, end);
    return i+1;
}

void quickSort(int arr[], int left, int right){

    if(left<right){

        int pi = partition(arr, left, right);

        quickSort(arr, left, pi-1);
        quickSort(arr, pi+1, right);
    }
}

int main(){

    int arr[]={0,9,8,7,6,5,4,3,2,1};

    quickSort(arr, 0, 9);

    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}