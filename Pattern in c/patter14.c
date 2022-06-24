#include<stdio.h>
int main()
{
	int i,j,k,space=0,s;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=space;s++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			printf(" %d",j);
		}
		for(k=4;k>=i ;k--)
		{
		printf(" %d",k);
     	}
    	printf(" \n");
		space++;
	}
	return 0;
}
