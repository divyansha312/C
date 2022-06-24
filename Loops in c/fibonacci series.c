#include<stdio.h>
int main()
{
	int i=0,num,m=0,n=1;
	printf("enter the number till you want fibonacci series\n");
	scanf("%d",&num);
	printf("fibonacci series is\n");
	printf("%d\n",m);
	printf("%d\n",n);
	while(i<num)
	{
		i=m+n;
		printf("%d\n",i);
		m=n;
		n=i;
	}
	
	return 0;
}
