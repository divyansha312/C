//WAP to change the value of a variable to ten times of its current value.
//Write a function and pass the value by reference.

#include<stdio.h>

int fun(int *a);

int fun(int *a)

{
  int p;
  p=10*(*a);
  return;
	
}
int main()
{
	int i,ptr;
	
	printf("Enter the value of i\n");
	scanf("%d",&i);
	
	ptr=fun(&i);
	printf("New value of i is %d\n",ptr);
	
	return 0;
}
