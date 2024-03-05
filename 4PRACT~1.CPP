#include <iostream>
using namespace std;

// How would you implement the Sieve of Eratosthenes algorithm in a programming language of your choice to efficiently print all prime numbers between 2 and a given positive integer 'n'? Please provide a concise and well-organized code snippet, along with an explanation of your approach.


void isPrime(int num){

    int arr[100] = {0};

    for(int i=2; i<=num; i++){
        if(arr[i] == 0){
            for(int j=i*i; j<=num; j+=i){
                arr[j] = 1;
            }
        }
    }

    for(int i=2; i<=num; i++){
        if(arr[i] == 0){
            cout<<i<<"\t";
        }
    }
}

int main(){

    int n;
    cout<<"Enter upper-limit untill you want to print the Prime numbers: ";
    cin>>n;
    isPrime(30);

return 0;
}