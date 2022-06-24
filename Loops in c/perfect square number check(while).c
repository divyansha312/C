#include<stdio.h>
int main()
{
	int i=0,num,count=0,sq;
	printf("enter a number");
	scanf("%d",&num);
	if(num<0)
	printf("negative numbers can not be a perfect square");
	else
	{ 
	sq=i*i;
	while(sq<=num)
	{
	if(sq==num)
	{ 
	count=1;
	break;
	}
	i++;
	sq=i*i;
	 }
	if(count==1)
	printf("perfect square");
	else
	printf("not a perfect square");
}
	return 0;
}
