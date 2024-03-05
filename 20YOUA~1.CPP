#include <iostream>
#include <stack>
#include <cmath>  // Include the cmath header for the pow function
using namespace std;

// You are given a C++ function prefixEvaluation() that evaluates a given prefix expression. The function uses a stack to perform the evaluation where each character represents either a digit (0-9) or an operator (+, -, *, /, ^). If the input string is not a valid prefix expression, the function prints a message. 

int prefixEvaluation(string s){
    stack<int> st;

    // Iterate through the input string from right to left
    for(int i=s.length()-1; i>=0; i--){

        // If the current character is a digit, convert it to an integer and push onto the stack
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }
        else{
            // If the current character is an operator (+, -, *, /, ^)
            int op1 = st.top();  // Pop the top element from the stack and assign it to op1
            st.pop();
            int op2 = st.top();  // Pop the next element from the stack and assign it to op2
            st.pop();

            // Perform the operation based on the operator
            switch(s[i]){
                case '+':
                    st.push(op1 + op2);
                    break;
                
                case '-':
                    st.push(op1 - op2);
                    break;

                case '*':
                    st.push(op1 * op2);
                    break;

                case '/':
                    st.push(op1 / op2);
                    break;

                case '^':
                    st.push(pow(op1, op2));  // Use the pow function for exponentiation
                    break;

                default:
                    break;
            }
        }
    }
    return st.top();  // Return the final result from the stack
}

int main(){

    string s = "+53";
    cout << "Result: " << prefixEvaluation(s) << endl;

    return 0;
}
