//WAP to find the trace of a matrix

#include<stdio.h>
int main()

{
 int m,n,i,j,sum=0;
 
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
	printf("principle diagonal of matrix is \n");
    
    	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==j)
		{
		sum+=arr[i][j];
		printf("%d",arr[i][j]);
		}
		else
		printf("\t");
		}
		printf("\n");
    }
    printf("trace of matrix is %d\n",sum);
}
else
printf("here no of rows and column are not equal so we can not find");
 return 0;	
}
