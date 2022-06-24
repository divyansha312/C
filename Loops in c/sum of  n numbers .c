#include<stdio.h>
int main()
{
	int num,sum=0,i=2;
	printf("enter the number");
	scanf("%d",&num);
	while(i<num)
	{
	sum=sum+i;
	i++;	
	}
	printf("sum of all numbers between 1and %d is %d\n",num,sum);
	return 0;
}
