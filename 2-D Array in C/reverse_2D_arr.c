//WAP to input a 2D integer array and print it in reverse order.

#include<stdio.h>
int main()

{
 int m,n,i,j;
 
 printf("enter the rows and columns you want\n");
 scanf("%d %d",&m,&n);
 
 int arr[m][n];
 
 	
 printf("enter the elements\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("elements are\n");
	
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
 
 printf("elements in reverse order are\n");
	
		for(i=m-1;i>=0;i--)
	  {
		for(j=n-1;j>=0;j--)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
 return 0;	
}
