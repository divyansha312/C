#include<stdio.h>
int main()
{
	int r,g=0,num;
	printf("enter a number");
		scanf("%d",&num);
		while(num!=0)
		{
			r=num%10;
			if(g<r)
			g=r;
			num=num/10;
		}
		printf("%d is the greatest digit among all",g);
		return 0;
	
}
