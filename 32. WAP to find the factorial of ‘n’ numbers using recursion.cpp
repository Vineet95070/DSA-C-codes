#include <iostream>
using namespace std;

// WAP to find the factorial of ‘n’ numbers using recursion.

int factorial(int num){

    if(num == 1){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}

int main(){
    cout<<endl;
    
    cout<<factorial(5);

    cout<<endl;
    return 0;
}




