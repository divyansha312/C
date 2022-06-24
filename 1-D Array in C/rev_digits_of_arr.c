//WAP to input an array and reverse the digits of an array
#include<stdio.h>
int main(){
	int i,n,rev,num,r,sum=0;
    int arr[10],brr[10];
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	       }
	
	       for(i=0;i<n;i++){
	       	rev=0;
	       	num=arr[i];
	       	while(num!=0){
	       	r=num%10;
	       	num=num/10;
	       	rev=rev*10+r;
			   }
	       	brr[i]=rev;
		   }
		   
	       printf("digits after reversing\n");
	       for(i=0;i<n;i++){
	       	printf("%d\t",brr[i]);
		   }
	       
	return 0;
}
