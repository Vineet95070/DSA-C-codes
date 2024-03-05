#include <iostream>
using namespace std;

int main(){

    int n, val;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){

        cout<<"Arr["<<i<<"] = ";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){

            if(arr[i] > arr[j]){

                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){

        cout<<arr[i];
        if(i != n-1){
        	cout<<", ";
		}
    }

    return 0;
}