// WAP to convert celsius to farenheit

#include<stdio.h>
float conversion(float C);
float conversion(float C)
{
	float F;
	F=1.8*C+32;
	return F;
}

int main()
{
	float c,result;
	printf("enter the temperature in CELCIUS to convert\n");
	scanf("%f",&c);
    result=conversion(c);
	printf("Temperature in FARENHEIT is %f ",result);
	return 0;
}
