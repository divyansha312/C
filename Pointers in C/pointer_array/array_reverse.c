//WAP to reverse an array.

#include<stdio.h>
void rev(int *arr,int n);
void rev(int *arr,int n)
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
}

int main()
{
	int arr[]={1,2,3,4,5};
	int i;
	rev(arr,5);
	printf("Value after reversing are\n");
	for(i=0;i<5;i++)
	printf("%d\n",arr[i]);
	return 0;
}
