#include <iostream>
using namespace std;

int main() {
    int n = 7; // Number of rows in the pattern

    int arr[3][2];

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){

            cout<<"Arr["<<i+1<<"]["<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){

            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
