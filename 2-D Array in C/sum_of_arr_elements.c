//WAP to input the 2D array and print the sum of all the elements.
#include<stdio.h>
int main()
{
	int arr[3][4],i,j,sum=0;
	
	printf("enter the elements\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	
	printf("\nsum of array elements is %d",sum);
	
	return 0;
}
