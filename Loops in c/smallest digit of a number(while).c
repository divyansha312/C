#include<stdio.h>
int main()
{
	int r,s=9,num;
	printf("enter a number");
		scanf("%d",&num);
		while(num!=0)
		{
			r=num%10;
			if(s>r)
			s=r;
			num=num/10;
		}
		printf("%d is the smallest digit among all",s);
		return 0;
	
}
