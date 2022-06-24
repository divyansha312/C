//WAP to input an integer array and print only sum of even indices in it
#include<stdio.h>
int main(){
	int i,n,sum=0;
	
	printf("enter the size of array\n");
	scanf("%d",&n);
	 int arr[n];
	
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("elements are\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	
	printf("elements of even indices are\n");
	for(i=0;i<n;i++){
		if(i%2==0){
		printf("%d\n",arr[i]);
		sum=sum+arr[i];
        	}
        }
        printf("the sum of even indices elements is %d",sum);
	
	return 0;
}
