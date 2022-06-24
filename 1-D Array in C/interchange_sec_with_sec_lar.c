//WAP to input an integer array and interchange the second element with the second last element of the array
#include<stdio.h>
int main()
{
  int n,i,arr[10],j,temp,count;
   printf("enter the size of an array\n");
   scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  printf("elements are\n");
  for(i=0;i<n;i++)
  	printf("%d\n",arr[i]);
  	
  	for(i=0;i<n;i++)
	  {
  		for(j=i+1;j<n;j++)
		  {
  			if(arr[i]>arr[j])
			  {
			  	temp=arr[i];
			  	arr[i]=arr[j];
			  	arr[j]=temp;
			  } 
			    }
	  }
   printf("array after sorting are\n");
    for(i=0;i<n;i++)
  	printf("%d\n",arr[i]);
  	
  	count=arr[1];
  	arr[1]=arr[n-2];
  	arr[n-2]=count;
  	
  	printf("elements after interchanging are\n");
  	 for(i=0;i<n;i++)
  	printf("%d\n",arr[i]);
  	
	  return 0;
}
