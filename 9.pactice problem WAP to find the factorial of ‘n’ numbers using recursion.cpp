#include <iostream>
using namespace std;

// WAP to find the factorial of ‘n’ numbers using recursion.
int factorial(int n) {

    if (n == 1 || n==2) {
        return n;
    }

    else
        return n*factorial(n-1) ;
}

int main() {
    int num = 5;
    cout<<factorial(num)<<endl;
    return 0;
}




