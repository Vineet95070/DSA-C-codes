#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// You are developing a data processing module for a data analytics platform. As part of this module, you need to implement a C++ function that efficiently counts the frequency of a particular character in a given string.

// Input:- The input is a string `input` of length `n` (1 <= n <= 10^5), containing a mix of uppercase and lowercase letters, digits, and special characters.
// - The input also includes a character `targetChar` whose frequency needs to be counted.

// Output:- The function should return an integer representing the frequency of the specified character `targetChar` in the given string.

// Example 1:
// std::string input = "Hello, World!";
// char targetChar = 'o';
// int result = countCharacterFrequency(input, targetChar);
// // result should be 2

// Example 2:
// std::string input = "Programming is fun we love PROGRAM!";
// char targetChar = 'g';
// int result = countCharacterFrequency(input, targetChar);
// // result should be 3


int freqOfCher(int freq, string s1, char s2){

    for(int i=0; i<s1.size(); i++){

        if(s2 == s1[i] || s2-32 == s1[i] || s2+32 == s1[i]){
            freq++;
        }
    }
    return freq;
}

int main(){

    string s1;
    char s2;
    int count=0;

    cout<<"Enter your string: "<<endl;
    getline(cin, s1);

    cout<<"Enter cheracter you want to traverse: ";
    cin>>s2;

    cout<<freqOfCher(count, s1, s2);

return 0;	
}