//WAP to find the index of the array element 
#include<stdio.h>
int main(){
	int i,n,num,flag=0;
    int arr[10];
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the number you want to found\n");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		if(arr[i]==num)
		{
		flag=1;
		printf("the %d is found at index %d",num,i);
		break;
	    }
	}
	
	if(flag==0)
	printf("the number does not found");
	
	return 0;
}
