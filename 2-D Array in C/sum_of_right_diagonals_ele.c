//WAP to input the 2D array and calculate the sum of right diagonal elements.

#include<stdio.h>
int main()
{
	int m,n,i,j,sum=0;
	
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

    	for(i=0;i<m;i++)
	  {
		for(j=0;j<n;j++)
		{
		if(i+j==m-1)
		sum+=arr[i][j];
        }
	   }
	   printf("sum of right diagonal elements is %d\n",sum);
    }
     
     else
     printf("no of rows and column are not equall so not possible");
     
     return 0;
 }
   
   
