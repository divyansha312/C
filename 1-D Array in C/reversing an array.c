//WAP to input an integer array and print the array elements in reverse order
#include<stdio.h>
int main()
{
	int n, i, arr[10];
	printf("enter the size of an array\n");
	scanf("%d",&n);
	
	printf("enter the elements of an array\n");
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("elements of an array are\n");
	
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
	
	printf("elements of an array in reverse order are\n");
	for(i=n-1;i>=0;i--)
		printf("%d\n",arr[i]);
		
	return 0;
}
