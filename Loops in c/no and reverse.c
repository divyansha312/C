#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the numbers you wants");
	scanf("%d",&n);
	printf("numbers are: ");
	for(i=1;i<=n;i++)
	printf("%d\n",i);
	printf("reverse numbers are: ");
	for(i=n;i>0;i--)
	printf("%d\n",i);
	return 0;
	
}
