#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n, maxNo=INT_MIN, minNo=INT_MAX;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    for(int i=1; i<=n; i++){

        cout<<"Arr["<<i<<"] = ";
        cin>>arr[i];

        maxNo = max(maxNo, arr[i]);     //max and min is two predefind functions use to compair two numbers
        minNo = min(minNo, arr[i]);
        cout<<arr[i]<<endl;

    }

    // for(int i=1; i<=n; i++){

    //     cout<<"Arr["<<i<<"] = ";
    //     cin>>arr[i];

    //     if(max <= arr[i]){
    //         max = arr[i];
    //     }
    //     else if(arr[i] <= min){
    //         min = arr[i];
    //     }

    // }

    cout<<"max = "<<maxNo<<"\nmin = "<<minNo<<endl;

   
    return 0;
}