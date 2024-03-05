#include <iostream>
using namespace std;

//Write a program to check whether a given number is positive, negative, or zero using the conditional operator.

int main() {
	cout<<endl;

	int n = -90;
    string res;

	res =  (n>0) ? "Positive" : (n==0) ? "Equal to zerro" : "Negative";
	cout<<res;

	cout<<endl;
    return 0;
}

