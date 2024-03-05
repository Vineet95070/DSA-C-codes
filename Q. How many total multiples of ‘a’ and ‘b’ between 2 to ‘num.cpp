#include <iostream>
using namespace std;

// How many total multiples of ‘a’ and ‘b’ between 2 to ‘num’ 


void multipleCount(int num, int a, int b){

    int multiple_a = 0;
    int multiple_b = 0;
    int multiple_a_b = 0;
    
    int i=2;
    while(i<=num){

        if(i%a == 0){
            multiple_a++;
        }
        if(i%b == 0){
            multiple_b++;
        }
        if(i%a==0 && i%b==0){
            multiple_a_b++;
        }
        i++;
    }
    int common = (multiple_a+multiple_b)-multiple_a_b;

    cout<<"Total Multiples of "<<a<<" : "<<multiple_a<<endl;
    cout<<"Total Multiples of "<<b<<" : "<<multiple_b<<endl;
    cout<<"Total Common multiples of "<<a<<" and "<<b<<" : "<<multiple_a_b<<endl;
    cout<<"Total multiples of "<<a<<" and "<<b<<" present between "<<a<<" and "<<num<<" : "<<common<<endl;
}

int main(){


    int range=50, n1=4, n2=6;
    multipleCount(range, n1, n2);

return 0;
}

