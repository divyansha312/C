//WAP to find the factorial of numbers and copy it into anoter array
#include<stdio.h>
int main(){
	int i,n,num,fact,k=0,j;
    int arr[10],frr[10];
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		num=arr[i];
		fact=1;
		for(j=1;j<=num;j++){
		fact=fact*j;
         	}
         	frr[k]=fact;
         	k++;
         }
         
         printf("factorial of number into another array\n");
         for(i=0;i<n;i++)
         printf("%d\t",frr[i]);
         
	return 0;
}
