//WAP to input an integer array and print all the perfect numbers present in the array
//WAP to input an array and print the sum of perfect numbers
#include<stdio.h>
int main()
{
  int n,i,arr[10],sum,j,add=0;
  printf("enter the size of an array\n");
  scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  printf("elements are\n");
  for(i=0;i<n;i++)
  	printf("%d\n",arr[i]);
  	
  	printf("perfect numbers are\n");
  	
  	for(i=0;i<n;i++)
  	    	{
  	      sum=0;
  	for(j=1;j<=arr[i]/2;j++)
	  {
  		if(arr[i]%j==0)
		  {
  			sum=sum+j;
		  }
	  }
	  if(sum==arr[i]){
		  printf("%d\n",arr[i]);
		  add=add+arr[i];
	        }
	    }
	        printf("sum of perfect number is %d",add);
	  return 0;
  }
