//WAP to input an integer array and print only odd numbers in it
#include<stdio.h>
int main(){
	int i,n;
    int arr[10];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("elements are\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	printf("even elements are\n");
	for(i=0;i<n;i++){
		if(arr[i]%2!=0)
		printf("%d\n",arr[i]);
	}
	
	
	return 0;
}
