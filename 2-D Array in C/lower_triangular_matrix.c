//WAP to print lower triangular of a matrix.

#include<stdio.h>
int main()

{
 int m,n,i,j;
 
 printf("enter the rows and columns you want\n");
 scanf("%d %d",&m,&n);
 
 int arr[m][n];

 if(m==n)	
 {
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
	
	printf("lower triangular matrix is\n");
	
		for(i=0;i<m;i++)
	 {
		for(j=0;j<n;j++)
		{
		  if(i>=j)
		  printf("%d\t",arr[i][j]);
		  else
		  printf("%d\t",0);
		}
		printf("\n");
	 }
	
  }
  
  else
  printf("no of rows and column are not identical so we can not find");
 return 0;	
}
