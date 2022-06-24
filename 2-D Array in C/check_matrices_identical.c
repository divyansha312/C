//WAP to check two matrices are identical or not.

#include<stdio.h>
int main()

{
 int m1,n1,i,j,m2,n2,flag=0;
 
 printf("enter the rows and columns of matrix1\n");
 scanf("%d %d",&m1,&n1);
 
 printf("enter the rows and columns of matrix2\n");
 scanf("%d %d",&m2,&n2);
 
 if(m1==m2&&n1==n2)
  {
 	int m,n;
 	m=m1;
 	n=n1;
 int arr1[m][n],arr2[m][n];
 
 printf("enter the elements of matrix1\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	 printf("enter the elements of matrix2\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("elements of matrix1 are\n");
	
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
 
 	printf("elements of matrix2 are\n");
	
		for(i=0;i<m;i++)
	   {
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	  }
	 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
	   if(!(arr1[i][j]==arr2[i][j]))
	    {
	    	flag=1;
	    	break;
		}
           }
           
           if(flag==1)
           {
           	printf("matrices are not identical\n");
           break;
           }
	}
	
	if(flag==0)
	printf("matrices are identical\n");
	
}

else
printf("no of rows and column are not equall of both the matrices so we can not compare them");

 return 0;	
}
