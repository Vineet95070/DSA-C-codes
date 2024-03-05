#include <iostream>
using namespace std;

// WAP to print ‘n’ natural numbers in [(i).increasing order, (ii).Decreasing order] using recursion.

int decresingOrder(int num){

    if(num == 1){
        return 1;
    }

    cout<<num<<" ";
    return decresingOrder(num-1);
}

void incresingOrder(int num){

    if(num==0){
        return;
    }
    incresingOrder(num-1);
    cout<<num<<" ";
}


int main(){
    cout<<endl;
    
    decresingOrder(10);
    cout<<endl;
    incresingOrder(10);

    cout<<endl;
    return 0;
}




