#include <iostream>
using namespace std;

// WAP to reverse a string using recursive function.

void reverseStr(string str){

    int i=1;
    
    if(str.length() == 0){
        return;
    }

    string rev = str.substr(1);
    reverseStr(rev);
    cout<<str[0];
}

int main(){
    cout<<endl;
    
    string str = "Hello";
    reverseStr(str);

    cout<<endl;
    return 0;
}




