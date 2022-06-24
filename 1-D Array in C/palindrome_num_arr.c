//WAP to input an integer array and print all the palindrome numbers in it
#include<stdio.h>
int main()
{
	int n,i,rev,r,arr[10],org,num;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("elements are\n");
		for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("palindrome numbers are\n");
	for(i=0;i<n;i++)
	{
	    num=arr[i];
	    org=num;
	    rev=0;
		while(num!=0)
		{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
		}
		if(org==rev)
		printf("%d\n",org);
	}
	return 0;
	}
