
#include<stdio.h>
int main()
{
	int num,rev=0,r;
	printf("enter the number");
	scanf(" %d",&num);
	for( ;num!=0;)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	printf(" reverse of the number is %d",rev);
	return 0;
}
