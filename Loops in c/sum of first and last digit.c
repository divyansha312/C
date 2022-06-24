#include<stdio.h>
int main()
{
	int num,l,f,sum;
	printf("enter the number");
	scanf("%d",&num);
	l=num%10; 
	while(num>=10)
	{
		num=num/10;
	}
	f=num;
	printf("first digit is %d and last digit is %d\n",f,l);
	sum=f+l;
	printf("sum of first and last digit of number is %d",sum);
	return 0;
}
