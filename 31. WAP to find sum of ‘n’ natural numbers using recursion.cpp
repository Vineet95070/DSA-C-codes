#include <iostream>
using namespace std;

// WAP to find sum of ‘n’ natural numbers using recursion:

int sumOfnatural(int num){

    if(num == 0){
        return 0;
    }
    else{
        return num + sumOfnatural(num-1);
    }
}

int main(){
    cout<<endl;
    
    cout<<sumOfnatural(10);

    cout<<endl;
    return 0;
}




