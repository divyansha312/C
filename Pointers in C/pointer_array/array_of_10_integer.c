//WAP to create an array of 10 integers.

#include<stdio.h>

int main()
{
	int arr[10],i;
	int *ptr;
	ptr=arr;
	
	printf("Enter the elements of the array\n");
	
	for (i=0;i<10;i++,ptr++)
	{
		scanf("%d",ptr);
	}
	ptr=arr;
	
	printf("Elements are\n");
	
	for (i=0;i<10;i++,ptr++)
	{
		printf("%d\n",*ptr);
	}

	return 0;
}
