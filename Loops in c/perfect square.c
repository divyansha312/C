#include<stdio.h>
int main()
{
	int n,i=0,j=1,k;
	printf("enter the perfect numbers you want");
	scanf("%d",&n);
	while(i<n)
	{
	k=j*j;
	printf("%d\n",k);
	j++;
	i++;
	}  
	return 0;
}
