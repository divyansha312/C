#include<stdio.h>
int main()
{
	int r, x,y,g,s;
	printf("enter the numbers");
	scanf("%d %d",&x,&y);
	if(x>y)
	{
		g=x;
		s=y;
	}
	else
	{
		g=y;
		s=x;
	}
	while(s!=0)
	{
	 r=g%s;
	 g=s;
	 s=r;
    }   
    printf("HCF of %d %d is %d",x,y,g);
	return 0;
}
