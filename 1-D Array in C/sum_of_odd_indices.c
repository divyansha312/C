//WAP to input an integer array and print only sum of odd indices in it
#include<stdio.h>
int main(){
	int i,n,sum=0;
    int arr[10];
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
	
	printf("elements of odd indices are\n");
	for(i=0;i<n;i++){
		if(i%2!=0){
		printf("%d\n",arr[i]);
		sum=sum+arr[i];
        	}
        }
        printf("the sum of odd indices elements is %d",sum);
	
	return 0;
}
