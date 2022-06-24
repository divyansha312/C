#include<stdio.h>
int main()
{
	float cp,sp,profit,loss;
	printf("enter the cost price of an item");
	scanf("%f",&cp);
	printf("enter the selling price of an item");
	scanf("%f",&sp);
	profit= sp-cp;
	loss=cp-sp;
	if(sp>cp)
	printf("theres a profit of %.2f",profit);
	else if (cp>sp)
	printf("thers a loss of %.2f",loss);
	else
	printf("not a profit nor a loss value is same");
	
	return 0;
}
