#include <iostream>
using namespace std;

// Write a recursive function to calculate the value of a number n raised to the power of p. Implement the function named power(n,p). The function should take two parameters, n and p, and return the result of n to the power of p. Use recursion to perform the calculation. 
int power(int n, int pow) {

    if (pow == 0) {
        return 1;
    }

    else
        return n*power(n,pow-1) ;
}

int main() {
    int num = 2, p=10;
    cout<<power(num, p)<<endl;
    return 0;
}




