//WAP to input the 2D array and print the elements of principal diagonals
#include<stdio.h>
int main()
{
	int m,n,i,j;
	
	printf("enter the row and column\n");
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
    printf("your enter matrix is\n");
    
   	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",arr[i][j]);
		}
		printf("\n");
    }
    
    printf("principle diagonal of matrix is \n");
    
    	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==j)
		printf("%d",arr[i][j]);
		else
		printf("\t");
		}
		printf("\n");
    }
     }
     
     else
     printf("no of rows and coloums are not equal so not possible\n");
     
     return 0;
 }
   
   
