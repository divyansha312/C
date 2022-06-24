#include<stdio.h>
int main()
{
	int max,x,y;
	printf("enter the two numbers");
	scanf("%d %d",&x,&y);
	if(x>y)
	max=x;
	else
	max=y;
	while(1)
	{
	if(max%x==0&&max%y==0)
	{
	printf("LCM of %d %d is %d",x,y,max);
	break;
    }  
    max++;
	}
	return 0;
}
