//WAP to input a double array and print all the elements of the array
#include<stdio.h>
int main()
{
	int i,j,row,col;
	int arr[10][10];
	printf("enter the rows and column you want\n");
	scanf("%d %d",&row,&col);
	printf("enter the values");
	for(i=0;i<row;i++)
	{
     for(j=0;j<col;j++)
     {
     	scanf("%d",&arr[i][j]);
	 }
	}
		for(i=0;i<row;i++)
	{
     for(j=0;j<col;j++)
     {
     	printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
	 }
	}
	return 0;
}
