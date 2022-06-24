//Verify using pointer arithmetic that (ptr+2) points to the third element 

//where ptr is a pointer pointing to the first element of the array

#include<stdio.h>

int main()
{
	int arr[10];
	
	int *ptr=arr;
	ptr=ptr+2;
	
	if(ptr==&arr[2])
	printf("These points to th same location in the memory\n");
	
	else
	printf("These does not points to th same location in the memory\n");
	
	return 0;
}
