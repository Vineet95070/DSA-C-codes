#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// You are working on a project for a financial institution, and you are tasked with optimizing a customer identification system. As part of the optimization process, you need to create a C++ function that takes a numeric string as input and rearranges its digits to form the largest possible number.
// Write a function with the following signature:

// Input:- The input is a string `number` of length `n` (1 <= n <= 100), representing a non-negative integer.

// Output:- The function should return a new string representing the largest possible number that can be obtained by rearranging the digits of the input number.

// Example 1:
// std::string number = "1432";
// std::string result = formLargestNumber(number);
// // result should be "4321"

// Example 2:
// std::string number = "9876543210";
// std::string result = formLargestNumber(number);
// // result should be "9876543210"


string gpossibleNo(string number){

       for(int i=0; i<number.size()-1; i++){

        for(int j=i+1; j<number.size(); j++){

            if(number[i]<number[j]){

                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    // sort(number.begin(), number.end(), greater<int>());

    return number;
}


int main(){

    string s1 = "54326548";
     
    // int i = stoi(s1);

    cout<<gpossibleNo(s1);

return 0;	
}