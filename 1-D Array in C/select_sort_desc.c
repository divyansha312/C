//WAP to sort the array through selection sort in desending order
#include<stdio.h>
int main()
{
  int n,i,j,arr[10],temp;
  printf("enter the size of an array\n");
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
  	for(j=i+1;j<n;j++){
  		if(arr[i]<arr[j]){
  			temp=arr[i];
  			arr[i]=arr[j];
  			arr[j]=temp;
  			
		  }
	  }
  }
  printf("elements after sorting are\n");
  for(i=0;i<n;i++){
  	printf("%d\n",arr[i]);
  }
  return 0;
}

