//WAP to input an array and print sum of elements
#include<stdio.h>
void sum(int*,int);
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
   sum(arr,n);
	return 0;
}
void sum(int* a,int num)
{
	int i,sum=0;
	for(i=0;i<num;i++)
	{
		sum+=a[i];
	}
	printf("sum of elements of array is %d\n",sum);
}
