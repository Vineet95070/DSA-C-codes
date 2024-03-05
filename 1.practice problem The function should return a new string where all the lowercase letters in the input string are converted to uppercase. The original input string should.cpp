#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// You work for a publishing company, and you are given the task of processing text for a new book. The text may contain a mix of uppercase and lowercase letters. Your job is to write a C++ function that takes a string as input and transforms it by converting all lowercase letters to uppercase.

// Input:- The input is a string of length `n` (1 <= n <= 100), containing a mix of uppercase and lowercase letters.

// Output:- The function should return a new string where all the lowercase letters in the input string are converted to uppercase. The original input string should remain unchanged.

// Example 1:
// std::string input = "Hello, World!";
// std::string result = textTransformer(input);
// // result should be "HELLO, WORLD!"

// Example 2:
// std::string input = "The quick brown fox jumps over 123 lazy dogs.";
// std::string result = textTransformer(input);
// // result should be "THE QUICK BROWN FOX JUMPS OVER 123 LAZY DOGS."

string toUpperCase(string sentence){

    for(int i=0; i<sentence.size(); i++){

        if(sentence[i] >= 'a' && sentence[i] <= 'z')
            sentence[i] -= 32;
    }

    //transform(sentence.begin(), sentence.end(), sentence.begin(), ::toupper);


    return sentence;
}


int main(){

    string s1;
    cout<<"Enter you string:"<<endl;
    getline(cin, s1);
     
    cout<<toUpperCase(s1);

return 0;	
}