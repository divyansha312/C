//WAP to find frequency of even number in an array

#include<stdio.h>
int main()

{
 int m,n,i,j,count=0;
 
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
			if(arr[i][j]%2==0)
			{
			count++;
		     }   
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	if(count!=0)
 printf("total even number in array is %d\n",count);
 
  else
 printf("there's no even number present here\n");
 
 
 return 0;	
}
