//WAP to check whether a matrix is identity matrix or not.

#include<stdio.h>
int main()

{
 int m,n,i,j,temp=0;
 
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
			printf("index[%d][%d]=",i+1,j+1);
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==j&&arr[i][j]!=1)
   	    {  
		temp=1;
		break;
	      } 
	      else if(i!=j&&arr[i][j]!=0)
	      {
	      	temp=1;
	      	break;
		  }
	    }
	    if(temp==1)
	    {
	    printf("this is not an identical matrix\n");
	    break;
	   }
	}
	if(temp==0)
	printf("this is an identical matrix\n");
}
 else
 printf("no of rows and column are not equall so we can not check");
 
 return 0;	
}
