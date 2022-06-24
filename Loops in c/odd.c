#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number you want to check till");
	scanf("%d",&n);
	printf("odd numbers are: ");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		printf("%d \n",i);
	}
	return 0;
}
