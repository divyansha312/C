#include<stdio.h>
int main()
{
	int a,b,c;
	
	const int sum=180;
	
	printf("enter the sides of triangle");
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a<=0||b<=0||c<=0)
	printf("this is not a valid triangle");
	
	else if(a+b+c==sum)
	printf("this is a valid triangle");
	
	else 
	printf(" this is not a valid triangle");
	
	return 0;
}
