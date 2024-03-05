#include <iostream>
using namespace std;

int reverse(int num){
//reverse a given integer:
    int n;
    int reverse=0;
    for(int i=0; i<num; i++){

        int once = num%10;
        reverse = (reverse*10) + once;
        num = num/10;
    }
    return reverse;
}

int main()
{
    cout<<reverse(54321)<<endl;

return 0;
}
