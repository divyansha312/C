//WAP to input an integer array and print length of array
#include<stdio.h>
int main(){
	int i,n;
    int arr[100];
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
		printf("length of array is %d",sizeof(arr));
	return 0;
}
