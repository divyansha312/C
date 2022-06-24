#include<stdio.h>
int main()
{
	int i,j,k,space=4,s;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		for(k=i+1 ;k<=5;k++)
		{
		printf("%d",k);
     	}
    	printf(" \n");
		space--;
	}
	return 0;
}
