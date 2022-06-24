//WAP to print fibonacci series using recursion

#include<stdio.h>
int fib(int);
int main()
{
	int i,n;
	printf("enter how numbers you want\n");
	scanf("%d",&n);
	printf("fibonacci series is :\n");
	for(i=0;i<n;i++)
	{
	 printf("%d\n",fib(i));	
	}
	return 0;
}

int fib(int x)
{
	if(x==0)
	return 0;
    else if(x==1)
	return 1;
	return(fib(x-1)+fib(x-2));
}
