//WAP having variable i. print the address of i. pass this variable to a function and print its addres.

#include<stdio.h>
void print_add(int a);

void print_add(int a)
{
	printf("The address of variable a is %u\n",&a);
	return ;
}

int main()
{
	int i=8;
	int *j;
	j=&i;
	printf("The address of variable i is %u\n",&i);
	print_add(i);
	printf("The address of variable i is %u\n",&i);
	return 0;
}
