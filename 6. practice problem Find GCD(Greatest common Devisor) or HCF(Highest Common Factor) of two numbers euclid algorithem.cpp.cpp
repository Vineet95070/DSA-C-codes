#include <iostream>
using namespace std;

// Find GCD(Greatest common Devisor) or HCF(Highest Common Factor) of two numbers and also known as Euclid algorithem for gcd.

int devisible(int a, int b){

    while(b != 0){
        int rem = a%b;          //for ex:- 70 % 55 = 15;  
        a=b;                    //         55 % 15 = 10;
        b=rem;                  //         15 % 10 = 5;
    }

    return a;
}

int main(){

    int a=70, b=55;
    
    cout<<devisible(a, b);

return 0;
}