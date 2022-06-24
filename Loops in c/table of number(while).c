#include<stdio.h>
int main()
{
	int num,i,table;
	printf("enter the number whose table you want:");
	scanf("%d",&num);
	while(i<=10)
	{
	table=num*i;
	printf("%d*%d=%d",num,i,table);
		i++;
	}
	
	return 0;
}
