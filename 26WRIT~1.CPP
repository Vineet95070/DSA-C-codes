#include <iostream>
using namespace std;

// Write a function `fibonacci` that takes an integer parameter `n` and returns the `n`th Fibonacci number. Then, in the `main` function, prompt the user to enter a number, call the `fibonacci` function, and output the result.

int febonacci(int n){

    int prev = 0;
    int curent = 1;
    int next = 0;
    int i=1;
    while(i<=n){

        cout<<prev<<" ";

        if(i==n){
            return prev;
            break;
        }

        next = prev + curent;
        prev = curent;
        curent = next;
        i++;
    }

}

int main(){
    
    cout<<endl<<febonacci(10);

    return 0;
}



