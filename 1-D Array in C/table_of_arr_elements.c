#include<stdio.h>
int main()
{
  int n,i,arr[10],j;
  printf("enter the size of an array\n");
  scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  	for(i=0;i<n;i++){
  		printf("table of %d is\n",arr[i]);
  		for(j=1;j<=10;j++){
  			printf("%d\t",arr[i]*j);
		  }
		  printf("\n\n");
	  }
  	return 0;
  }
