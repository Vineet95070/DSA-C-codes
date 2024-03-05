#include <stdio.h>
#include <stdlib.h>

//Dangling pointer is a pointer which  points to a non-existing memory location.


int main(){
	
	int *ptr = NULL;		//It is a good practice to inetialize a pointer with NULL;
	
	ptr = (int *)malloc(sizeof(int));
	
	free(ptr);		// Due to free() function ptr is now points to a non existing memory location.
	
return 0;	
}