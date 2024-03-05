#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    vector<int> v1;

    for(int i=0; i<5; i++){

        v1.push_back(7+i);
    }

    for(int i=0; i<v1.size(); i++){

        cout<<v1[i]<<", ";
    }cout<<endl;

    v1.pop_back();  // pop_back() function is use to delete last element;

    vector<int>::iterator it;
    for(it = v1.begin(); it != v1.end(); it++){

        cout<<*it<<", ";
    }cout<<endl;

    for(auto element: v1){

        cout<<element<<", ";
    }cout<<endl;

    vector<int> v2 (5,6);   //5 times 6;
    for(it=v2.begin(); it!=v2.end(); it++){
        cout<<*it<<", ";
    }cout<<endl;

    // swap(v1,v2);    //use to swap all values between two vectors;
    // for(auto i: v1){
    //     cout<<i<<", ";
    // }cout<<endl;

    // for(auto i: v2){
    //     cout<<i<<", ";
    // }cout<<endl;

    v1.push_back(2);

    for(auto a: v1){
        cout<<a<<", ";
    }cout<<endl;

     //sort() function is defind under algorithm header file
    sort(v1.begin(), v1.end());    

    for(auto a: v1){
        cout<<a<<", ";
    }cout<<endl;

    return 0;
}







