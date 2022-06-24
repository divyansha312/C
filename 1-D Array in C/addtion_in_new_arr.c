//WAP to input 2 arr and add their sum in 3rd arr
#include<stdio.h>
int main()
{
  int n,arr[10],brr[10],crr[10],i;
  printf("enter the size of an array\n");
  scanf("%d",&n);
  
  printf("enter the elements of 1st array\n");
  for(i=0;i<n;i++){
  	scanf("%d",&arr[i]);
  }
  
  printf("elements are\n");
  for(i=0;i<n;i++){
  	printf("%d\n",arr[i]);
  }
  
   printf("enter the elements of 2nd array\n");
  for(i=0;i<n;i++){
  	scanf("%d",&brr[i]);
  }
  
  printf("elements are\n");
  for(i=0;i<n;i++){
  	printf("%d\n",brr[i]);
  }
  printf("The array elements of third array are : \n");
    for(i=0;i<n;i++){
    	crr[i]=arr[i]+brr[i];
    	printf("%d\t",crr[i]);
    }
  
  return 0;
}
