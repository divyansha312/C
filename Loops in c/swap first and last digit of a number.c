//WAP to swap the first and last digit of a number and then print the new number
#include<stdio.h>
int main()
{
	int num,last,swap,r,mid=0,first;
	printf("enter the number");
	scanf("%d",&num);
	last=num%10; 
	first=num/10;
	while(first>=10)
	{
	r=first%10;
		first=first/10;
		mid=mid*10+r;
	}
	printf("first digit is %d and last digit is %d\n",first,last);
	printf(" the reverse mid value of number is %d\n",mid);
	while(mid!=0)
	{
		r=mid%10;
		last=last*10+r;
		mid=mid/10;
	}
	last=last*10+first;
	printf("the new number after swapping is %d\n",last);
	return 0;
}
