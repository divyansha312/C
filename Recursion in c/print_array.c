//WAP to print array elements using recursion
#include<stdio.h>
#define max 20
void array_print(int[],int,int);
int main()
{
int i,n;
int arr[max];
printf("enter how many elements you want\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
  printf("index[%d]=",i);
  scanf("%d",&arr[i]);
}
printf("array elements are :\n");
array_print(arr,0,n);
return 0;
}

void array_print(int arr[],int i,int n)
{
	if(i<n)
	{
		printf("%d\n",arr[i]);
		array_print(arr,i+1,n);
	}	
}
