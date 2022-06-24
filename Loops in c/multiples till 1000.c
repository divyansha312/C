//WAP to input a number and print all the multiple of number from number to 1000. and if number is greater than 1000 then print not possible
#include<stdio.h>
int main()
{
	int num,i=1,mul;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num>1000)
	printf("not possible");
	else
	{
	printf("multiples of %d are\n",num);
	while(i<=1000/2)
	{
	 mul=num*i;
	 if(mul<=1000)
	printf("%d\n",mul);
	i++;
	 }
    }
	return 0;
}
