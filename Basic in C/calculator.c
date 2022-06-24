#include<stdio.h>
int main()
{
	float a,b,A,S,D,M;
	printf("enter the two numbers");
	scanf("%f %f",&a,&b);
	A =a+b;
	S=a-b;
	D=a/b;
	M=a*b;
	printf(" ADDITION of %.2f and %.2f is %.2f\n",a,b,A);
	printf(" SUBTRACTION of %.2f and %.2f is %.2f\n",a,b,S);
	printf(" DIVISION of %.2f and %.2f is %.2f\n",a,b,D);
	printf(" MULTIPLICATION of %.2f and %.2f is %.2f\n",a,b,M);
	return 0;
}
