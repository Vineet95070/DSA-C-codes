#include <iostream>
using namespace std;

// Write a program to determine whether a given character is a vowel or a consonant using the conditional operator.


int main() {
	cout<<endl;
	char ch='a';

	string res = (ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch== 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') ? "Vowel" : "Consonent";

	cout<<res;

	cout<<endl;
    return 0;
}

