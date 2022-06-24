//WAP to input an integer array and print the array elements
#include<stdio.h>
int main()
{
	int i,n, arr[n];
	printf("how many numbers you want to enter\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
	}
	printf("elements of array are\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
