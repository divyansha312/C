#include<stdio.h>
int main()
{
  int n,i,arr[10],sum;
  printf("enter the size of an array\n");
  scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  	if(arr[0]%2==0){
  		sum=0;
  		for(i=0;i<n;i++){
  			if(arr[i]%2==0){
  			sum+=arr[i];
  		               }
		            }
	printf("the sum of even elements is %d\n",sum);
	            }
	  else{
	  	sum=0;
  		for(i=0;i<n;i++){
  			if(arr[i]%2!=0){
  			sum+=arr[i];
  		               }
		            }
   printf("the sum of odd elements is %d\n",sum);
	  }
  	return 0;
  }
