#include<stdio.h>
int main()
{
	int n,x,pow=1,i=1;
	printf("enter a number and its exponent");
	scanf("%d%d",&n,&x);
	while(i<=x)
	 {
	 	pow=pow*n;
	 	i++;
	 }
	 	printf("%d",pow);
	     return 0;
}
