//WAP for array to function using pointer

#include<stdio.h>
void printarray(int *ptr,int n);  //int ptr[]
void printarray(int *ptr,int n)
{
	int i;
	for(i=1;i<n;i++,ptr++)
	{
		printf("The value of element %d is %d\n",i,*(ptr));
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	printarray(arr,8); //8=size
	return 0;
}
