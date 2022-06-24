//WAP to print a 2D array

#include<stdio.h>
int main()
{
	int arr[][3]={{1,2,3},{4,5,4},{7,8,9}},i,j;
	
	printf("array elements are\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
}
