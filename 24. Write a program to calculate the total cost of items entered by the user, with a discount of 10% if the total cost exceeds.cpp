#include <iostream>
using namespace std;

// Write a program to calculate the total cost of items entered by the user, with a discount of 10% if the total cost exceeds $1000, using the conditional operator.

int main()
{
    int total_amount = 1200;

    (total_amount>1000) ? cout<<"Pay: "<<total_amount - (total_amount/10) : cout<<"Pay: "<<total_amount;

    return 0;
}
