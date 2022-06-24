#include<stdio.h>
int main()
{
	int i,j,space=4,s;
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
    	printf("\n");
		space++;
	}
	return 0;
}
