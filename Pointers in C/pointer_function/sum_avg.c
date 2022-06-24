//WAP using a function which calculate the sum and average of two numbers

//Use pointers and print the values of sum and average in main().

#include<stdio.h>

void SumANDAvg(int a,int b,int * sum,float *avg);

void SumANDAvg(int a,int b,int * sum,float *avg)
{
	*sum=a+b;
	
	*avg= (float)*sum/2;
}

int main()
{
	int i,j,sum;
	
	float avg;
	
	printf("Enter the value of i and j\n");
	
	scanf("%d %d",&i,&j);
	
	SumANDAvg(i,j,&sum,&avg);
	
	printf("The value of sum is %d\n",sum);
	
	printf("The value of avg is %.2f\n",avg);
	
	return 0;
}
