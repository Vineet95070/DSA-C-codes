#include <iostream>

using namespace std;

int linearSearch(int value, int arr[], int size){

    int start=0, end=size;

    while(start <= end){
        
        int mid = (start + end)/2;

        if(value == arr[mid]){
            return mid;
        }	
        else if(arr[mid]>value){
            start = 0;
            end = mid-1;
        }
        else if(arr[mid]<value){
            start = mid+1;
        }
	}
    return -1;
}

int main(){

    int n, val;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){

        cout<<"Arr["<<i<<"] = ";
        cin>>arr[i];

    }

    while(true){
    	cout<<"Enter value you want to treverse : ";
    	cin>>val;
    	cout<<"position = "<<linearSearch(val, arr, n)<<endl;
	}
   
    return 0;
}