#include <iostream> 
using namespace std;

#define n 5
class stack{

    int *arr;
    int top;
public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int value){
        if(top == n-1){
            cout<<"Stack overflow: "<<endl;
            return;
        }
        top++;
        arr[top] = value;
    }

    void pop(){
        if(top == -1){
            cout<<"No element to pop"<<endl;
        }
        top--;
    }
    
    int Top(){
        if(top == -1){
            cout<<"No element in stack :"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }

    void displayStack(){
        while(top != -1){
            cout<<arr[top--]<<"  ";
        }cout<<endl;
    }
};

int main(){

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;

    st.displayStack();


return 0;
}