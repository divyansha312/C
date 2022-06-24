#include<stdio.h>
int main()
{
	int unit;
	float cost=0,surcharge;
	printf("enter unit:");
	scanf("%d",&unit);
	if(unit>250)
	{
		cost=unit*1.50;
	}
	else{
		if(unit<=50)
		{
			cost=unit*0.50;
		}
		else if(unit<=150)
		{
			cost=50*0.50;
			unit-=50;
			cost=cost+unit*0.75;
		}
		else{
			cost=50*0.50;
			unit-=50;
			cost=cost+100*0.75;
			unit-=100;
			cost=cost+unit*1.20;
		}
	}
	surcharge=(cost*20)/100;
	cost=cost+surcharge;
	printf(" total bill cost is %.2f",cost);
	return 0;
}
