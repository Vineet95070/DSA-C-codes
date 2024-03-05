#include <stdio.h>

// Void pointer is a pointer which have no associated data type. it can be type casted to any type.

int main(){
	
	int n = 10;
	void *ptr = &n;			//ptr is a void pointer use 
	
	printf("%d", *(int*)ptr); 
	
return 0;	
}