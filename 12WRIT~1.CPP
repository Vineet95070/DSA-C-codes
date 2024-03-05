#include <iostream>
using namespace std;

// Write a C++ program to generate all possible permutations of a given string using recursion. Implement the recursive function allPossPerm that takes a main string ms and a substring ss as parameters. The function should print all possible permutations of the string. Ensure that the base case handles the scenario where the main string is empty. 


void allPossPerm(string ms, string ss){

    if(ms.length() == 0){
        cout<<ss<<endl;
    }

    for(int i=0; i<ms.length(); i++){

        char ch = ms[i];
        string s = ms.substr(0,i)+ms.substr(i+1);
        allPossPerm(s, ss+ch);
        
    }
}

int main(){

    string s = "ABC";
    char c = 'a';

    allPossPerm(s, "");

    return 0;
}