#include<stdio.h>
int main()
{
	int num=1,n,i,sum=0;
	printf("enter the number till you want perfect number");
	scanf("%d",&n);
	printf("perfect number till %d are\n",n);
	while(num<=n)
	{
		for(i=1;i<=num/2;i++)
		{
			if(num%i==0)
			sum=sum+i;
		}
		if(sum==num)
		printf("%d\n",num);
		sum=0;
		num++;
	}
	return 0;
}
