#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number");
	scanf(" %d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if(sum==n)
	printf("perfect number");
	else
	printf("not a perfect number");
 return 0;
}
