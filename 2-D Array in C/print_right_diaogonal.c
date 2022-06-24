//WAP to input the 2D array and print the elements of right diagonals
#include<stdio.h>
int main()
{
	int m,n,i,j;
	
	printf("enter the row and column\n");
	scanf("%d %d",&m,&n);
	
	int arr[m][n];
	
	printf("enter the elements\n");
	
	if(m==n)
	{
		
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
    printf("right diagonals elements are\n");
    	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i+j==m-1)
		printf("%d",arr[i][j]);
		else
		printf("\t");

		}
		printf("\n");
    }
     }
     
     else
     printf("no of rows and column are not equall so not possible");
     
     return 0;
 }
   
   
