#include <iostream>
using namespace std;

void allPrimeFactor(int num){

    int i=2;
    int factor;
    while(i<=num){
        
        if(num%i == 0){
            cout<<i<<" ";
            num /= i;
        }
        else{
            i++;
        }
    }

}

int main(){

    allPrimeFactor(18);

return 0;
}

