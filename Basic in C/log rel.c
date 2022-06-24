#include<stdio.h>
int main()
{
	int A=10,B=3,C=4,D=9,E=12;
	printf("Output is %d\n",A++/++B-C%A*C+D++/E);
	printf("%d\n %d\n %d\n %d\n %d\n",A , B , C , D , E);
	return 0;
}

