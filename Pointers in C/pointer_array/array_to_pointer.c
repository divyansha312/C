//WAP for array to pointers

#include<stdio.h>

int main()
{
	int arr[4],i;
	int *j;
	j=arr;  //j=&arr[0]
	for(i=0;i<4;i++,j++)
	{
		printf(" Enter the value of marks of %dth student\n",i);
		scanf("%d",j);
	}
	j=arr;
	for(i=0;i<4;i++,j++)
	{
		printf(" the value of marks of %dth student is %d \n",i,*j);
	
	}
	return 0;
}
