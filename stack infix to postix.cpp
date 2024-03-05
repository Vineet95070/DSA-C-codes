#include <iostream>
#include <stack>
using namespace std;

// Function to determine the priority of operators
int priority(char c){

    if(c == '^'){
        return 3;
    }
    else if(c == '/' || c == '*'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

// Function to convert infix expression to postfix expression
string infixToPostfix(string s){
    stack<char> st;   // Stack to store operators
    string res;       // Result string to store postfix expression

    for(int i=0; i<s.length(); i++){

        // If the character is an operand (variable)
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            res += s[i];  // Append the operand to the result string
        }
        // If the character is an opening parenthesis
        else if(s[i] == '('){
            st.push(s[i]);  // Push the opening parenthesis onto the stack
        }
        // If the character is a closing parenthesis
        else if(s[i] == ')'){
            // Pop operators from the stack and append them to the result
            // string until an opening parenthesis is encountered
            while(!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            // Pop the opening parenthesis from the stack
            if(!st.empty()){
                st.pop();
            }
        }
        // If the character is an operator
        else{
            // Pop operators from the stack and append them to the result
            // string as long as the top operator has higher or equal
            // priority compared to the current operator
            while(!st.empty() && priority(st.top()) > priority(s[i])){
                res += st.top();
                st.pop();
            }
            // Push the current operator onto the stack
            st.push(s[i]);
        }
    }
    // Pop any remaining operators from the stack and append them to the result
    while(!st.empty()){
        res += st.top();
        st.pop();
    }

    return res;  // Return the postfix expression
}

int main(){

    // Uncomment and test different infix expressions

    // cout << infixToPostfix("xy*zw/+");
    cout << infixToPostfix("x*y+(z/w)");
    // cout << infixToPostfix("(7-2)*6/3");
    // cout << infixToPostfix("(a-b/c)*(a/k-l)");

    return 0;
}
