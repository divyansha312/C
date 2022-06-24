//WAP to find prime numbers in an array
#include<stdio.h>
int main()
{
	int n,i,j,arr[10],count,num;
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
	printf("prime elements are\n");
	for(i=0;i<n;i++){
		num=arr[i];
		count=0;
		for(j=2;j<=num/2;j++){
		if(num%j==0){
		count++;
		break;
		}
         }
		if(count==0){
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}
