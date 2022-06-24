#include<stdio.h>
int main()
{
	int r,g=0,s=9,num,sum=0;
	printf("enter a number");
		scanf("%d",&num);
		if(num<10&&num>-10)
		printf("not possible");
		else
		{
		while(num!=0)
		{
			r=num%10;
			if(g<r)
			g=r;
			if(s>r)
			s=r;
			num=num/10;
		}
		sum=g+s;
		printf("%d is the smallest digit\n and %d is the greatest digit of the number\n",s,g);
		printf("the sum of the greatest and smallest digit is %d\n",sum);
	}
		return 0;
	
}
