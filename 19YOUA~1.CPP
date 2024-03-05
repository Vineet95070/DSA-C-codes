#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

// You are given a C++ function that evaluates a postfix expression. The function takes a string str as input, where each character represents either a digit (0-9) or an operator (+, -, *, /, ^). The operators follow the postfix notation.
// The postfix expression is evaluated using a stack, and the result is returned. Your task is to test the provided code with different postfix expressions and verify its correctness.


// Function to evaluate a postfix expression
int postfixevaluation(string str) {
    stack<int> st;

    // Iterate through each character in the postfix expression
    for (int i = 0; i < str.length(); i++) {

        // If the character is a digit, push it onto the stack
        if (str[i] >= '0' && str[i] <= '9') {
            st.push(str[i] - '0');
        } else {
            // If the character is an operator, pop the top two operands from the stack
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            // Perform the operation based on the operator and push the result back onto the stack
            switch (str[i]) {
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
                st.push(pow(op1, op2));
                break;

            default:
                break;
            }
        }
    }

    // The final result is on top of the stack
    return st.top();
}

int main() {
    // Example postfix expression: "46+2/5*7+"
    string s = "82/3-";

    // Call the function to evaluate the postfix expression
    cout << "Result: " << postfixevaluation(s) << endl;

    return 0;
}
