//WAP to print pattern 

#include<stdio.h>
void printpattern(int n);
void printpattern(int n)
{
	int i;
	if(n==1)
	{
		printf("*\n");
		return;
	}

	printpattern(n-1);
	for( i=0;i<(2*n-1);i++)
	{
		printf("*");
	}
	printf("\n");
}

int main()
{
	int n;
	
	printf("enter the value of n\n");
	scanf("%d",&n);
	
	printpattern(n);
	return 0;
}
