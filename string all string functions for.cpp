#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string s1 = "Hello ";
    string s2 = "World";
    string s4 = "100";

    sort(s1.begin(), s1.end()); //define under <algorithm> header file;

    int sum = stoi(s4) + 8;     //stoi() stands for String to integer;
    cout<<sum<<endl;

    string s5 = to_string(sum);     //to_string() converts interger to string;
    cout<<s5+"108"<<endl;

    cout<<s1.at(6)<<endl;

    s1.append(s2);

    for(int i=0; i<s1.length(); i++){
        cout<<s1[i];
    }
    cout<<""<<endl;

    cout<<s1.find("W")<<endl;

    s1.erase(0,6);
    cout<<s1<<endl;

    s1.insert(0, "Hello ");
    cout<<s1<<endl;

    cout<<s1.substr(6,5)<<endl;

    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;

    s1.clear();

    if(s1.empty()){
        cout<<"String is empty!"<<endl;
    }
    else
        cout<<"Is not empty!"<<endl;

    return 0;
}







