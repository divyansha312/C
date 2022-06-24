//WAP to input an array and print the sum of duplicate elements from the array

#include<stdio.h>

int main()
{
	int i,j,n,count,k,check;
	
	int arr[10],sum=0;
	
	printf("enter the size of array\n");
	
	scanf("%d",&n);
	
	printf("enter the elements\n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
	}
	printf("duplicate elements are\n");
	
	for(i=0;i<n;i++){
		
		check=0;
		
		for(k=i-1;k>=0;k--){
			
			if(arr[i]==arr[k]){
				
				check++;
				
				break;
				
			}
		}
		if(check==0){
			
			count=0;
			
			for(j=i;j<n;j++){
				
				if(arr[i]==arr[j]){
					
					count++;
					
				}
				
			}
			
			if(count!=1){
				
				printf("%d\n",arr[i]);
				
				sum+=(arr[i]*count);	
			
			}
			
		}
		
	}
	printf("sum of duplicate elements is %d\n",sum);
	
	return 0;
	
}
