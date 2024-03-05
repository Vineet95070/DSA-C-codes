#include <iostream>
using namespace std;

// Write a C++ program to generate all possible permutations of a given string using recursion. Implement the recursive function allPossPerm that takes a main string ms and a substring ss as parameters. The function should print all possible permutations of the string. Ensure that the base case handles the scenario where the main string is empty. 



void permutation(string ms, string ans){

    if(ms.length() == 0){

        cout<<ans<<endl;
    }

    for(int i=0; i<ms.size(); i++){

        char ch = ms[i];
        string sub = ms.substr(0,i)+ms.substr(i+1);

        permutation(sub, ans+ch);
    }
}

// First Call:

// ms = "ABC", ans = ""
// Iterates over each character of ms:
// For 'A': Calls permutation("BC", "A")
// For 'B': Calls permutation("AC", "B")
// For 'C': Calls permutation("AB", "C")
// Second Call (for 'A'):

// ms = "BC", ans = "A"
// Iterates over each character of ms:
// For 'B': Calls permutation("C", "AB")
// For 'C': Calls permutation("B", "AC")

// This line creates a substring of ms starting at index 0 + 1, which is equivalent to index 1. So, it takes the substring starting from index 1 to the end of the string.

// Let's take an example:

// Suppose ms is initially "ABC". Then:

// ms.substr(0 + 1) means taking the substring starting from index 1.
// The substring starting at index 1 in "ABC" is "BC".
// So, the correct explanation is that ms.substr(0 + 1) gives you "BC", not "AB" as mentioned in my previous response.

int main() {

    string s1 = "ABC";
    
    permutation(s1,"");
    return 0;
}







