#include <iostream>
using namespace std;

// Problem:
// Write a C++ program that assists in classifying students' grades based on their percentage. The program should take the student's percentage as input and categorize the grade into specific letter grades such as 'A,' 'B,' 'C,' 'D,' or 'F,' according to predetermined grade ranges.

// Details:

// The program should prompt the user to enter the student's percentage.
// Based on the entered percentage, the program should determine the corresponding grade category.
// Use the following typical grade ranges as a guideline (you can adjust them based on your preference):
// 'A': 90% and above
// 'B': 80% to 89%
// 'C': 70% to 79%
// 'D': 60% to 69%
// 'F': Below 60%

int main(){

    int marks = -1;
    char grade;

    // if(marks>=90)
    //     grade = 'A';

    // else if(marks>=80)
    //     grade = 'B';
    
    // else if(marks >= 70)
    //     grade = 'C';

    // else if(marks >= 60)
    //     grade = 'D';

    // else{
    //     grade = 'F';
    // }

    bool isA = marks>=90;
    bool isB = marks>=80 && !isA;
    bool isC = marks>=70 && !isB;
    bool isD = marks>=60 && !isC;
    bool isF = marks>=0  && !isD;

    if(isA)
        cout<<"A"<<endl;
    
    else if(isB)
        cout<<"B"<<endl;
    
    else if(isC)
        cout<<"C"<<endl;
    
    else if(isD)
        cout<<"D"<<endl;
    
    else
        cout<<"F"<<endl;

    // cout<<grade<<endl;

return 0;
}#include <iostream>
using namespace std;

// Problem:
// Write a C++ program that assists in classifying students' grades based on their percentage. The program should take the student's percentage as input and categorize the grade into specific letter grades such as 'A,' 'B,' 'C,' 'D,' or 'F,' according to predetermined grade ranges.

// Details:

// The program should prompt the user to enter the student's percentage.
// Based on the entered percentage, the program should determine the corresponding grade category.
// Use the following typical grade ranges as a guideline (you can adjust them based on your preference):
// 'A': 90% and above
// 'B': 80% to 89%
// 'C': 70% to 79%
// 'D': 60% to 69%
// 'F': Below 60%

int main(){

    int marks = -1;
    char grade;

    // if(marks>=90)
    //     grade = 'A';

    // else if(marks>=80)
    //     grade = 'B';
    
    // else if(marks >= 70)
    //     grade = 'C';

    // else if(marks >= 60)
    //     grade = 'D';

    // else{
    //     grade = 'F';
    // }

    bool isA = marks>=90;
    bool isB = marks>=80 && !isA;
    bool isC = marks>=70 && !isB;
    bool isD = marks>=60 && !isC;
    bool isF = marks>=0  && !isD;

    if(isA)
        cout<<"A"<<endl;
    
    else if(isB)
        cout<<"B"<<endl;
    
    else if(isC)
        cout<<"C"<<endl;
    
    else if(isD)
        cout<<"D"<<endl;
    
    else
        cout<<"F"<<endl;

    // cout<<grade<<endl;

return 0;
}#include <iostream>
using namespace std;

// Problem:
// Write a C++ program that assists in classifying students' grades based on their percentage. The program should take the student's percentage as input and categorize the grade into specific letter grades such as 'A,' 'B,' 'C,' 'D,' or 'F,' according to predetermined grade ranges.

// Details:

// The program should prompt the user to enter the student's percentage.
// Based on the entered percentage, the program should determine the corresponding grade category.
// Use the following typical grade ranges as a guideline (you can adjust them based on your preference):
// 'A': 90% and above
// 'B': 80% to 89%
// 'C': 70% to 79%
// 'D': 60% to 69%
// 'F': Below 60%

int main(){

    int marks = -1;
    char grade;

    // if(marks>=90)
    //     grade = 'A';

    // else if(marks>=80)
    //     grade = 'B';
    
    // else if(marks >= 70)
    //     grade = 'C';

    // else if(marks >= 60)
    //     grade = 'D';

    // else{
    //     grade = 'F';
    // }

    bool isA = marks>=90;
    bool isB = marks>=80 && !isA;
    bool isC = marks>=70 && !isB;
    bool isD = marks>=60 && !isC;
    bool isF = marks>=0  && !isD;

    if(isA)
        cout<<"A"<<endl;
    
    else if(isB)
        cout<<"B"<<endl;
    
    else if(isC)
        cout<<"C"<<endl;
    
    else if(isD)
        cout<<"D"<<endl;
    
    else
        cout<<"F"<<endl;

    // cout<<grade<<endl;

return 0;
}