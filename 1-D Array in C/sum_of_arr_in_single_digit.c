//WAP to input an array and print the sum of all digits in single digits
#include<stdio.h>
int main()
{
  int n,i,arr[10],sum=0,num,r,s;
  printf("enter the size of an array\n");
  scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  	for(i=0;i<n;i++){
  		sum=sum+arr[i];
	  }
	  printf("the sum of all digits of array is %d\n",sum);
	  num=sum;
	  while(num>9){
	  	s=0;
	  	while(num!=0){
	  		r=num%10;
	  		num=num/10;
	  		s=s+r;
		  }
	num=s;	  
	  }
	  printf("the sum in single digit is %d",num);
	  return 0;
}
