//WAP to count the digits of a given number using recursion

#include<stdio.h>
int count_digit(int);
int main()
{
	int n,digit;
	printf("enter the number\n");
	scanf("%d",&n);
	digit=count_digit(n);
	printf("total digits in %d is %d\n",n,digit);
	return 0;
}

int count_digit(int num)
{
int d=0;
if(num/10==0)
{
d++;
return d;
}
num=num/10;
d++;
return (d+count_digit(num));
}
