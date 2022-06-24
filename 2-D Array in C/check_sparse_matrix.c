//WAP to check whether a matrix is sparse matrix or not.

#include<stdio.h>
int main()

{
 int m,n,i,j,temp,count=0;
 
 printf("enter the rows and columns you want\n");
 scanf("%d %d",&m,&n);
 
 int arr[m][n];
 
 	
 printf("enter the elements\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("index[%d][%d]=",i,j);
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
   temp=(m*n)/2;
   
   for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]==0)
			count++;
		}
		
	}
	//printf("value of count is %d\n",count);
	
	if(count>temp)
	printf("this is a sparse matrix\n");
	
	else
	printf("this is not a sparse matrix\n");
   
   return 0;	
}
