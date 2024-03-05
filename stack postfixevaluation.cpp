#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

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
    string s = "46+2/5*7+";

    // Call the function to evaluate the postfix expression
    cout << "Result: " << postfixevaluation(s) << endl;

    return 0;
}
