//WAP to input the 2D array and print the sum of each column elements
#include<stdio.h>
int main()
{
	int m,n,i,j;
	
	printf("enter the row and column\n");
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
    
    printf("your enter matrix is\n");
    
   	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d\t",arr[i][j]);
		}
		printf("\n");
    }
    int sum;
    	for(i=0;i<n;i++)
	  {
	  	 sum=0;
		for(j=0;j<m;j++)
		{
		sum+=arr[j][i];
		}
		printf("sum of elements of column %d is %d\n",i+1,sum);
    }
    
     return 0;
 }
   
   
