#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=5;j++)
	{
		if(i%2!=0||j==1||j==5)
		printf("*");
		else
		printf(" ");
	}
	printf("\n\n");
	}
	return 0;
}
