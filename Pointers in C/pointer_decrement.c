//WAP to subtraction of a number to a pointer

#include<stdio.h>

int main()
{
	
	int i=34;
	int*j;
	
	char a='A';
	char *b;
	
	float c=8.9;
	float *d;
	
    j=&i;
    
    b=&a;
	
	d=&c;
	
	printf("The value of j is %u\n",j);
	j=j-1;
	printf("The value of j is %u\n",j);
	
	printf("The value of b is %u\n",b);
	b--;
	printf("The value of b is %u\n",b);
	
	printf("The value of d is %u\n",d);
	d=d-1;
	printf("The value of d is %u\n",d);
	
	return 0;
}
