#include<stdio.h>
int main()
{
	int i,j,space=0,s;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
    	printf("\n");
		space++;
	}
	return 0;
}
