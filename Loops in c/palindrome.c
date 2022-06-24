
#include<stdio.h>
int main()
{
	int num,rev=0,r,org;
	printf("enter the number");
	scanf(" %d",&num);
	org=num;
	for( ;num!=0;)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	printf(" reverse of the number is %d\n",rev);
	if(org==rev){
	printf("palindrome number");
              }
	else {
	printf("not a palindrome number");
       }
	return 0;
}
