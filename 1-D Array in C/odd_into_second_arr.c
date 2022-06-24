//WAP to input an integer array and print only odd numbers into second array
#include<stdio.h>
int main(){
	int i,n,j=0,count=0;
    int arr[10],err[10];
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			count++;
	     	err[j]=arr[i];
	     	j++;
	             }    
             }
	printf("odd elements into second array are\n");
	for(j=0;j<count;j++){
		printf("%d\n",err[j]);
	}
	
	return 0;
}
