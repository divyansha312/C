#include<stdio.h>
int main()
{
	int sum=0,r,num;
	printf ("enter the number");
	scanf(" %d",&num);
	for( ;num!=0; )
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	printf("sum of the digits is %d \n",sum);
	return 0;
}
