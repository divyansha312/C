//WAP to find sum of digits of number usin recursion

#include<stdio.h>
int sum_digit(int);

int main()
{
	int n,sum;
	printf("enter the number\n");
	scanf("%d",&n);
	sum=sum_digit(n);
	printf("sum of digit is: %d",sum);
	return 0;
}

int sum_digit(int num)
{
 int s,r;
 if(num/10==0)
 return num;
 r=num%10;
 s=r+sum_digit(num/10);
 return s;

}
