#include<stdio.h>
int main()
{
	int n,i=0,j=2,k,count;
	printf("enter the numbers you want ");
	scanf("%d",&n);
	while(i<n)
	{
		count=0;
		for(k=2;k<=j/2;k++)
		{
			if(j%k==0)
			{
				count++;
				break;
				
			}
		}
		if (count==0)
		{
			printf("%d\n",j);
			i++;
		}
		j++;
	}
	return 0;
}
