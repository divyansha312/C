#include<stdio.h>
int main()
{
	int num,rev=0,r;
	printf("enter a number to find odd digits");
		scanf("%d",&num);
		while(num!=0)
		{
			r=num%10;
			num=num/10;
			rev=rev*10+r;
		}
		printf("odd numbers are:\n");
		while(rev!=0)
		{
		 r=rev%10;
		 if(r%2!=0){
		 printf("%d\n",r);
             	}
		 rev=rev/10;
		}
		return 0;
	
}
