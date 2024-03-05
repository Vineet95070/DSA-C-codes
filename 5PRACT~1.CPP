#include <iostream>
using namespace std;

// Describe how you would adapt the Sieve of Eratosthenes algorithm to efficiently find all prime factors of a given positive integer 'n'.Provide a clear and concise explanation, along with a code snippet in a programming language of your choice, to demonstrate the implementation of this modified algorithm for prime factorization.

void isPrime(int num){

    int arr[100] = {0};

    for(int i=2; i<=num; i++){
        arr[i] = i;
    }

    for(int i=2; i<=num; i++){
        for(int j=i*i; j<=num; j+=i){
            if(arr[j] == j){

                arr[j] = i;
            }
        }
    }

    while(num != 1){
        cout<<arr[num]<<" ";
        num /= arr[num];
    }

}

int main(){

    int n;
    cout<<"Enter number which you want to print all prime factors: ";
    cin>>n;
    isPrime(n);

return 0;
}