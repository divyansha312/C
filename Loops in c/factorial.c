//WAP to find the factorial of a number
#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("enter the number");
	scanf("%d",&num);
	if(num<0)
	printf("factorial of a negative number does not exists");
	else
	{
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of number is %d",fact);
    }
	return 0;
}
