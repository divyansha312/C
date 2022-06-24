//wap to find the average of three numbers
#include<stdio.h>
float average(int a,int b,int c);
float average(int a,int b,int c)
{
	float avg;
	avg=(float)(a+b+c)/3;
	return avg;
}

int main()
{
	int a,b,c;
	float avg;
	printf("enter the number you want\n");
	scanf("%d %d %d",&a,&b,&c);
    avg=average(a,b,c);
	printf("Average of three numbers is %f\n",avg);
	return 0;
}
