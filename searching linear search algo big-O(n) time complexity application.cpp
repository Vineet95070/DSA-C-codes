#include <iostream>

using namespace std;

int linearSearch(int value, int arr[], int size){

    for(int i=0; i<size; i++){

        if(value == arr[i])
            return i;
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