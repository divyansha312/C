//WAP to print the address of 3 address array

#include<stdio.h>

int main()
{
	int i,j,k;
	int arr[2][3][4];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
	{
			for(k=0;k<4;k++)
	{
		printf("The address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
	      }
	         }	
	           }
	return 0;
}
