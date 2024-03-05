#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// Function to determine the priority of operators
int priority(char ch){
    if(ch == '^'){
        return 3;
    }
    else if(ch == '*' || ch=='/'){
        return 2;
    }
    else if(ch == '+' || ch=='-'){
        return 1;
    }
    else {
        return -1;
    }
}

// Function to reverse a string
void reverseString(string &s) {
    reverse(s.begin(), s.end());
}

// Function to convert infix expression to prefix expression
string infixToPrefix(string s){

    // Reverse the input infix expression
    reverseString(s);
    string res;
    stack<char> st;

    for(int i=0; i<s.length(); i++){

        // If the character is an operand (variable)
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
            res += s[i];  // Append the operand to the result string
        }
        // If the character is a closing parenthesis
        else if(s[i] == ')'){
            st.push(s[i]);  // Push the closing parenthesis onto the stack
        }
        // If the character is an opening parenthesis
        else if(s[i] == '('){
            // Pop operators from the stack and append them to the result
            // string until a closing parenthesis is encountered
            while(!st.empty() && st.top()!=')'){
                res += st.top();
                st.pop();
            }
            // Pop the closing parenthesis from the stack
            if(!st.empty()){
                st.pop();
            }
        }
        // If the character is an operator
        else{
            // Pop operators from the stack and append them to the result
            // string as long as the top operator has higher or equal
            // priority compared to the current operator
            while(!st.empty() && priority(s[i])<=priority(st.top())){
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

    // Reverse the result string to get the final prefix expression
    reverseString(res);

    return res;  // Return the prefix expression
}

int main(){

    // Uncomment and test different infix expressions

    // cout << infixToPostfix("xy*zw/+");
    cout << infixToPrefix("(a-b/c)*(a/k-l)");
    // cout << infixToPostfix("(7-2)*6/3");
    // cout << infixToPostfix("(a-b/c)*(a/k-l)");

    return 0;
}
