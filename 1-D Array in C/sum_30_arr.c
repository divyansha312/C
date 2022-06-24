//WAP to read an array of 100 integers.display all pairs of elements whose sum is 30
#include<stdio.h>
int main()
{
  int n,i,arr[100],j;
  printf("enter the size of an array\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
    {
  	scanf("%d",&arr[i]);
	}
	
  printf("the pairs whose sum is 30 are\n");
  for(i=0;i<n;i++)
  { 
  	for(j=i+1;j<n;j++)
	  {
  		if(arr[i]+arr[j]==30)
		  {
  			printf("%d %d\n",arr[i],arr[j]);
		  }
	  }
  }
  return 0;
}
