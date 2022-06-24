#include<stdio.h>
int main()
{
	int num=1,org,digit=0,sum=0,res,i,r;
	printf(" enter the number");
	scanf("%d",&num);
	org=num;
	if(num==0)
	digit++;
	else
	{
		for( ;num!=0; )
		{
		num=num/10;
		digit++;
         }
    }
num=org;
for( ;num!=0; )
{
	r=num%10;
	num=num/10;
	res=1;
	for( i=1;i<=digit;i++){
	res=res*r;
}
sum=sum+res;
}
if(sum==org)
printf("armstrong number");
else
printf("not an armstrong number");
	return 0;
}
