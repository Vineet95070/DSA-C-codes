#include <iostream>
using namespace std;

void merge(int arr[], int start, int end, int mid){

    //creating two temporary arrays;
    int s1 = mid-start+1;
    int s2 = end - mid;
    int a[s1], b[s2];

    //copying all elements of arr[] into a[] and b[];
    for(int i=0; i<s1; i++){
        a[i] = arr[start+i];
    }
    for(int i=0; i<s2; i++){
        b[i] = arr[mid+i+1];
    }

// int i=0, j=0, k=start;
    // while(i<s1 && j<s2){

    //     if(a[i] < b[j]){
    //         arr[k++] = a[i++];
    //     }
    //     else{
    //         arr[k++] = b[j++];
    //     }
    // }

    // //copying left elements (if any);
    // while(i<s1){
    //     arr[k++] = a[i++];
    // }
    // while(j<s2){
    //     arr[k++] = b[j++];
    // }

    //merging a[] and b[] after comparing both of them;
    int i=0, j=0, k=start;
    while(i<s1 && j<s2){

        if(a[i] < b[j]){
            arr[k] = a[i];
            k++; i++;
        }
        else{
            arr[k] = b[j];
            k++; j++;
        }
    }

    //adding left elements (if any);
    while(i<s1){
        arr[k] = a[i];
        k++; i++;
    }
    while(j<s2){
        arr[k] = b[j];
        k++; j++;
    }
}

void subArrays(int arr[], int left, int right){

    //devide main array to sub-arrays using recursion;
    if(left<right){

        int mid = (left+right)/2;

        subArrays(arr, left, mid);
        subArrays(arr, mid+1, right);

        merge(arr, left, right, mid);
    }
}

int main(){

    int arr[] = {5,4,3,2,1,8,7,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    subArrays(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}