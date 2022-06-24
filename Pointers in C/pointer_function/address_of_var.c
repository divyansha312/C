//WAP to print the address of a variable use this address to get the value of this variable

#include<stdio.h>

int main()
{
	int a=8;
	int *p;
	p=&a;
	printf("The address of variable a is %u\n",&a);
	
	printf("The address of variable a is %u\n",p);
	
	
	printf("The value of variable is %d\n",*p);
	
	printf("The value of variable is %d\n",a);
	return 0;
}
