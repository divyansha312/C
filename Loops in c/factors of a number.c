#include<stdio.h>
int main()
{
	int num,i=1;
	printf("enter a number");
	scanf("%d",&num);
	printf("factors of num are:");
	while(i<=num)
	{
	if(num%i==0)
	printf("%d\n",i);
	i++;
	}
	return 0;
}
