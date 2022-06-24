//WAP to find sum and product of all elements.

#include<stdio.h>
int main()

{
 int m,n,i,j,sum=0,prod=1;
 
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
 
 	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum+=arr[i][j];
			prod*=arr[i][j];
		}
	}
	
	printf("sum of all elements is %d and product of all elements is %d\n",sum,prod);
 
 return 0;	
}
