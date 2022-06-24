#include<stdio.h>
int main()
{
	int n,i=2,count=0;
    	printf("enter the number you want to check");
		scanf("%d",&n);
		while(i<=n/2)
		{
			if(n%i==0)
			{
				count++;
			}
		i++;
      	}
				if(count==0)
				printf("no is prime");
				else
				printf("no is not a prime");
		return 0;
	
}
