#include <iostream>
using namespace std;

int main() {
    int x = 42;
    double y = 3.14;
    int arr[5] = {5,4,3,2,1};
    int *ptr = &x;
    int **ptr2 = &ptr;

    cout<<**ptr2<<endl; //de-refrensing two times

    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    
    // Creating an array of pointers to different data types
    void *ptrarr[2];  // void* allows pointers of any type
    
    // Storing pointers to variables
    ptrarr[0] = &x;
    ptrarr[1] = &y;

    cout<<ptrarr[1]<<endl;
    cout<<1[ptrarr]<<endl;
    cout<<ptrarr[0]<<endl;
    cout<<&x<<endl;

    cout<<sizeof(ptrarr[1])<<endl;
    cout<<sizeof(y)<<endl;

    return 0;
}







