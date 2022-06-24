#include<stdio.h>
int main()
{
	int r,rev=0,org,num;
	printf("enter the number");
		scanf("%d",&num);
		org=num;
		while(num!=0)
		{
			r=num%10;
			num=num/10;
			rev=rev*10+r;
		}
		num=org;
		if(num==rev)
		printf("palindrome number");
		else
		printf("not a palindrome number");
		return 0;
	
}
