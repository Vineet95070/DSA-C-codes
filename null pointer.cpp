#include <stdio.h>
#include <stdlib.h>

//NULL pointer is use to initialize a pointer when that pointer isn't assign any valid memory address
//Usefull for handling errors using malloc function.
//It is also a good practice to initialize a pointer with NULL.

int main(){
	
	int *ptr = NULL;
	ptr = (int *)malloc(2*sizeof(int));
	
	if(ptr == NULL)
		printf("Memory is not Allocated!");
		
	else
		printf("Memory Allocated sucessfully!");		
	
return 0;	
}