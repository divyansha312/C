//wap to find factorial using recursion
#include<stdio.h>
int factorial(int x);
int factorial(int x)
{
	if(x==1||x==0)
	return 1;
	else
	{
		return x*factorial(x-1);
	}
}
int main()
{
	int n,fact;
	printf("enter the number whose factorial you want\n");
	scanf("%d",&n);
    fact=factorial(n);
    printf("factorial of %d is %d",n,fact);
	return 0;
}
