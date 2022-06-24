//WAP to find the subtraction of two matrices.

#include<stdio.h>
int main()

{
 int m1,n1,i,j,m2,n2;
 
 printf("enter the rows and columns of matrix1\n");
 scanf("%d %d",&m1,&n1);
 
 printf("enter the rows and columns of matrix2\n");
 scanf("%d %d",&m2,&n2);
 
 int arr1[m1][n1],arr2[m2][n2];
 
  if(m1==m2&&n1==n2)
  {
 	int m,n;
 	m=m1;
 	n=n1;
 int arr1[m][n],arr2[m][n];
 int arr[m][n];
 
 printf("enter the elements of matrix1\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	 printf("enter the elements of matrix2\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("elements of matrix1 are\n");
	
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
 
 	printf("elements of matrix2 are\n");
	
		for(i=0;i<m;i++)
	   {
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	  }
	  
 	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		   arr[i][j]=arr1[i][j]-arr2[i][j];
		}
	}
	 printf("new matrix after the subtraction of elements of matrix1 and matrix2 are\n");
	 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		   printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
 }
 
 else
 printf("subtraction is not possible because no of rows and column are not equall");
 return 0;	
}
