#include<stdio.h>
int main()
{
	int a=5;
	int b=0;
	b=a++ - a++;
	printf("%d %d",a,b);
	return 0;
}
