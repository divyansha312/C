#include<stdio.h>
int main()
{
	int num,i=1,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	while(i<=num/2)
	{
		if(num/i==0)
		sum=sum+i;
		i++;
	}
	if(num==sum)
	printf("perfect number");
	else
	printf("not a perfect number");
	return 0;
}
