//WAP to input an integer array and copy the largest and smallest element of unsorted array
#include<stdio.h>
int main()
{
  int n,i,arr[10],sum=0,max,sml;
  printf("enter the size of an array\n");
  scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  	max=arr[0];
  	for(i=1;i<n;i++){
  		if(max<arr[i])
  		max=arr[i];
	  }
	  printf("the largest element of the array is %d\n",max);
	  
	  sml=arr[0];
	  for(i=1;i<n;i++){
	  	if(sml>arr[i])
	  	sml=arr[i];
	  }
	  printf("the smallest element of the array is %d\n",sml);
	  
  	return 0;
  }
