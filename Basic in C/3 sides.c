#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the sides of triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b&&b==c)
	printf("equilateral triangle");
	else if(a!=b&&b!=c&&c!=a)
	printf("scalene triangle");
	else
	printf("isosceles triangle");
	return 0;
	
}
