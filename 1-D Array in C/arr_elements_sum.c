//WAP to input an integer array and print the sum of all array elements
#include<stdio.h>
int main()
{
  int n,i,arr[10],sum=0;
  printf("enter the size of an array\n");
  scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  printf("elements are\n");
  for(i=0;i<n;i++)
  	printf("%d\n",arr[i]);
  	
  	for(i=0;i<n;i++){
  		sum=sum+arr[i];
	  }
	  
	  printf("the sum of all array elements is %d",sum);
	  return 0;
}
