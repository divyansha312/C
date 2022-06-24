//WAP 

#include<stdio.h>

int basic(int a,int b);
int basic(int a, int b)
{
	a=9,b=10;
	return a+b;
	
}

int main()
{
	int x=6, y=8,c;
	printf("The value of x and y before function call is %d,%d\n",x,y);
    c=basic(x,y);
	printf("The value of x and y after function call is %d,%d\n",x,y);
	printf("The value of c is %d\n",c);
	return 0;
}
