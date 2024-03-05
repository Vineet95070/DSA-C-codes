#include <iostream>
using namespace std;

// Write a program to determine whether a given year is a leap year or not using the conditional operator.
int main() {
	cout<<endl;

	int year = 2024;
    string res;

	res =  (year%4 == 0) ? "Leap Year" : "Not a leap year:";
	cout<<res;

	cout<<endl;
    return 0;
}

