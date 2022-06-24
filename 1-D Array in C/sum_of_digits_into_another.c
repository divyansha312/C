//WAP to input an array and calculate their sum of digits and store it to the second array
#include<stdio.h>
int main()
{
  int n,i,sum,num,r;
  int arr[10],sum_arr[10];
  printf("enter the size of an array\n");
  scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  	 printf("elements are\n");
  for(i=0;i<n;i++)
  	printf("%d\t",arr[i]);
  	
  	for(i=0;i<n;i++){
  		num=arr[i];
  		sum=0;
  	while(num!=0){
  		r=num%10;
  		num=num/10;
	    sum=sum+r;
	         }
	  sum_arr[i]=sum;
	  }
	  printf("\n");
	  printf("sum of digits into another array is\n");
	  for(i=0;i<n;i++){
	  	printf("%d\t",sum_arr[i]);
	  }
	  
	  return 0;
}
