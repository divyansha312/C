//WAP to interchange rows in the matrix.

#include<stdio.h>
int main()

{
 int m,n,i,j,n1,n2,temp;
 
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
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	 }
printf("enter the rows you want to interchange\n");
scanf("%d %d",&n1,&n2);

for(i=0;i<n;i++)
{
	
		temp=arr[n1-1][i];
	arr[n1-1][i]=arr[n2-1][i];
	arr[n2-1][i]=temp;
	

}
printf("rows after interchanging are\n");
for(i=0;i<m;i++)
	  {   
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	 }
	 
  return 0;	
}
