//WAP to input an integer array and print the perfect square elements of the array
#include<stdio.h>
int main()
{
  int n,i,arr[10],num,j,sqr,count,sum=0;
  printf("enter the size of an array\n");
  scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  printf("elements are\n");
  for(i=0;i<n;i++)
  printf("%d\n",arr[i]);
  
  printf("perfect square are\n");
  for(i=0;i<n;i++)
  { 
     j=1;
     count=0;
  while(j<=arr[i]/2){
  	sqr=j*j;
  	if(arr[i]==sqr)
  	{
  		count++;
     	break;
	  }
	  j++;
  }
  if(count!=0)
  printf("%d\n",sqr);
  }
  return 0;
}
