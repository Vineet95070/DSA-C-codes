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

    int count = 0;
    while(count < n){

        for(int i=0; i<n-count; i++){

            if(arr[i+1] < arr[i]){

                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
        count++;
    }
    
    cout<<"After sorting :"<<endl;
    for(int i=0; i<n; i++){

        cout<<arr[i];
        if(i != n-1){
        	cout<<", ";
		}
    }

    return 0;
}