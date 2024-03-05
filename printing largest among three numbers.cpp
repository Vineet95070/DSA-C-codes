#include <iostream>
using namespace std;

int main(){

    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    // if(a>b && a>c)
    //     cout<<a<<endl;
    
    // if(b>a && b>c)
    //     cout<<b<<endl;
    
    // if(c>a && c>b)
    //     cout<<c<<endl;

    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }

return 0;
}