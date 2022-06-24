//WAP to input an array and find the frequency of each element
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
	printf("elements are\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	for(i=0;i<n;i++){
		check=0;
		for(k=i-1;k>=0;k--){
			if(arr[k]==arr[i]){
				check=1;
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
		printf("frequency of %d is %d\n",arr[i],count);
	      }
       } 
	return 0;
}
