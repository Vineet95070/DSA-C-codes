#include <iostream>
#include <chrono>           //chrono library contains time management featurs

using namespace std;

int main(){
	                        //auto keyword automaticaly assigned data types to the variables according to needs
	auto start = chrono::high_resolution_clock::now();          
	
	for(int i=0; i<=10; i++){
	    cout<<"Hello"<<endl;
	}
	
	auto end = chrono::high_resolution_clock::now();
	
	auto dur = chrono::duration_cast<chrono::microseconds>(end - start);
	
	cout<<dur.count();
	
return 0;	
}