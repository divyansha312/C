#include<stdio.h>
int main()
    {
	int num=1,n,org,digit=0,sum=0,res,i,r;
	printf(" enter the number upto which you want armstrong number");
	scanf("%d",&n);
	while(num<=n)
	{
		sum=0;
       digit=0;
		org=num;
		for( ;num!=0; )
		{
		num=num/10;
		digit++;
         }
      num=org;
    for( ;num!=0; )
    {
	r=num%10;
	num=num/10;
	res=1;
	for( i=1;i<=digit;i++)
	{
	res=res*r;
    }
   sum=sum+res;
     }
   if(sum==org)
   printf("%d\n",sum);
   num=org;
    num++;
   }
	return 0;
  }
