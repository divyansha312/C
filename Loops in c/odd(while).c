#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter the number");
	scanf("%d",&n);
	printf("odd numbers are :\n");
	while(i<=n)
	{
		if(i%2!=0)
		printf("%d\n",i);
		i++;
		
	}
	return 0;
}
