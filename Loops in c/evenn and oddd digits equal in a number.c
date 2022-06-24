//WAP to input a number and check whether the number has equal even and odd digits.
#include <stdio.h>
int main()
{
	int num,r,even=0,odd=0;
	printf("enter the number");
	scanf("%d",&35num);
	while(num!=0)
	{
		r=num%10;
		num=num/10;
		if(r%2==0)
		even++;
		else
		odd++;
	}
	if(even==odd)
	printf("even and odd digits are equal in a number");
	else
	printf("even and odd digits are not equal in a number");
	return 0;
}
