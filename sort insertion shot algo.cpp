#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of an Array : ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Arr["<<i<<"] : ";
        cin>>arr[i];
    }

    for(int i=1; i<n; i++){

        int curent = arr[i];
        int j = i-1;

        while(arr[j]>curent && j>=0){
            arr[j+1] = arr[j]; 
            j--;
        }
        arr[j+1] = curent;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }

return 0;
}