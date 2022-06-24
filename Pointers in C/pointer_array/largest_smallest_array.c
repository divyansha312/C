//WAP to input an array and find the sum of largest and smallest element of the array

#include<stdio.h>
void array(int*,int);
int main()
{
	int arr[30],n,i;
	printf("enter how many elements you want in an array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("elements of array are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	array(arr,n);
	return 0;
}
void array(int* a,int num)
{
	int l=a[0],s=a[0],i;
	for(i=0;i<num;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	for(i=0;i<num;i++)
	{
		if(a[i]<s)
		{
			s=a[i];
		}
	}
	printf("largest element is %d\n and smallest element is %d",l,s);
}
