//WAP to input an array and print unique elements from the array
#include<stdio.h>
int main()
{
	int i,j,n,arr[10],count,k,check;
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	printf("enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("unique elements are\n");
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
			if(count==1)
				printf("%d\n",arr[i]);
		}
	}
	return 0;
}
