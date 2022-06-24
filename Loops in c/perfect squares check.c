#include<stdio.h>
int main()
{
	int num,sq=1,i,count=0;
	printf("enter the number you wanna check");
	scanf("%d",&num);
	if(num<0)
	printf("negative numbers can not be a perfect square");
	else{
		sq=i*i;
	for(i=0;i<=num;i++)
		{
			if(sq==num)
			{
			count=1;
			break;
			}
		sq=i*i;
		}
	if(count==1)
	printf("perfect square number");
	else
	printf("not a perfect square number");
} 
	return 0;
}
