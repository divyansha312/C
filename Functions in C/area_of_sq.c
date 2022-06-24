//wap to calculate the are of square with side a.
#include<stdio.h>

int square(int a);
int square(int a)
{
	int area;
	area=a*a;
	return area;
}

int main()
{
	int side,A;
	printf("enter the side of square\n");
	scanf("%d",&side);
	A=square(side);
	printf("area of square is %d\n",A);
	return 0;
}

