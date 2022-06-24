//WAP and find the position of the given number.

#include<stdio.h>
int main()

{
 int m,n,i,j,ele,temp=0;
 
 printf("enter the rows and columns you want:\n");
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
	
	printf("elements are:\n");
	
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
 printf("enter the element whose position you've to find:\n");
 scanf("%d",&ele);
 
 for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]==ele)
			{
			temp++;
			printf("%d is found at position (%d,%d)\n",ele,i+1,j+1);
		      }
		}
	}
 if(temp==0)
 printf("element is not present here\n");
 
 return 0;	
}
