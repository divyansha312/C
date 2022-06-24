#include<stdio.h>
int main()
{
	int i,j,k,s,space=4;
	for(i=1;i<=5;i++)
	{
		for( s=1;s<=space;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=i-1;k>=1;k--)
		{
			printf("*");
		}
		printf("\n");
		space--;
	}
	space=1;
	for(i=4;i>=1;i--)
	{
		for( s=1;s<=space;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=i-1;k>=1;k--)
		{
			printf("*");
		}
		printf("\n");
		space++;
	}
	return 0;
}
