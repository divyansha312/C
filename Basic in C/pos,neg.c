#include<stdio.h>
int main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	if(x<0)
	printf("no is negative");
	else if (x>0)
	printf("no is positive");
	else
	printf(" no is 0");
	return 0;
	
}
