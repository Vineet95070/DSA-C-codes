#include <iostream>
using namespace std;

//sum of n natural numbers using recursion

int sum(int n) {

    if (n == 0) {
        return n;
    }

    else
        return n + sum(n-1);
}

int main() {
    int num = 5;
    cout<<sum(num)<<endl;
    return 0;
}




