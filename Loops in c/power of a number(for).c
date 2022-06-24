#include<stdio.h>
int main()
{
	int num,x,pow=1,i;
	printf("enter the number and its power you want");
	scanf("%d %d",&num,&x);
	for(i=1;i<=x;i++)
	{
	pow=pow*num;	
	}
	printf("power of %d is %d",num,pow);
	return 0;
}
