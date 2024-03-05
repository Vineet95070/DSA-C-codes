#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    int arr[] = {12,22,34,56,23,43,67,23};
    vector <pair <int, int>> v1;

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){

        v1.push_back(make_pair(arr[i], i));
    }

    sort(v1.begin(), v1.end());

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){

        cout<<v1[i].first<<", ";
    }cout<<endl;

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){

        cout<<v1[i].second<<", ";
    }

    return 0;
}







