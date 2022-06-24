#include<stdio.h>
int main()
{
	int arr[10]={2000,500,200,100,50,20,10,5,2,1};
	int amount, temp ,i ;
	printf("enter the amount");
	scanf("%d",&amount);
	temp=amount;
	for(i=0;i<10;i++)
	{
		printf("%d note is %d\n",arr[i],temp/arr[i]);
		temp=temp%arr[i];
	
	}
	return 0;
	
}
