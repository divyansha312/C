//WAP to input the 2D array and print the transpose of matrix.

#include<stdio.h>
int main()
{
	int m,n,i,j;
	
	printf("enter the row and column:\n");
	scanf("%d %d",&m,&n);
	
	int arr[m][n];
	
	printf("enter the elements:\n");
		
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&arr[i][j]);
		}
    }
    
    printf("your enter matrix is:\n");
    
   	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",arr[i][j]);
		}
		printf("\n");
    }
    
    printf("transpose of matrix is:\n");
    
    	for(i=0;i<n;i++)
	   {
		for(j=0;j<m;j++)
		{
		   printf("%d\t",arr[j][i]); 
		}
		printf("\n");
       }
    
     return 0;
 }
   
   
