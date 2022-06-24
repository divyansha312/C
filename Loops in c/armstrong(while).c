#include<stdio.h>
int main()
{
	int num,i,digit=0,org,sum=0,r,res=1;
	printf("enter the number");
	scanf("%d",&num);
	org=num;
	while(num!=0)
	{
   	num=num/10;
	digit++;
	}
	num=org;
	while(num!=0)
	{
		r=num%10;
		num=num/10;
		res=1;
		i=1;
		while(i<=digit)
		{
			res=res*r;
			i++;
		}
		sum=sum+res;
	}
	if(sum==org)
printf("armstrong number");
else
printf("not an armstrong number");
	return 0;
}
