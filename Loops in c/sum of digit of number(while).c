#include<stdio.h>
int main()
{
	int num,r,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	while(num!=0)
	{
	r=num%10;
		num=num/10;
		sum=sum+r;
	}
	printf("sum of digits of number is %d\n",sum);
	return 0;
}
