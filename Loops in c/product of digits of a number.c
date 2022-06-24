#include<stdio.h>
int main()
{
	int num,r,p=1;
	printf("enter a number");
	scanf("%d",&num);
	while(num!=0)
	{
	r=num%10;
	num=num/10;
	p=p*r;
	}
	printf("product of digits of a number is %d",p);
	return 0;
}
