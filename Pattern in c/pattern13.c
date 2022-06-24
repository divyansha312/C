#include<stdio.h>
int main()
{
	int i,j,k,space=0,s;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=i-1 ;k>=1 ;k--)
		{
		printf("%d",k);
     	}
    	printf("\n");
		space++;
	}
	return 0;
}
