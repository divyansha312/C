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
		for(j=5;j>=i;j--)
		{
			printf(" %d",j);
		}
		for(k=i+1; k<=5 ;k++)
		{
		printf(" %d",k);
     	}
    	printf(" \n");
		space++;
	}
	return 0;
}
