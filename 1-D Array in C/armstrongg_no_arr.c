//WAP to input an integer array and print only armstrong elements of the array
#include<stdio.h>
int main()
{
  int n,i,arr[10],num,org,digits,res,r,sum;
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
  		num=arr[i];
  		org=num;
  		digits=0;
  		sum=0;
  		if(num==0)
  		digits++;
  		else
		  {
  			while(num!=0)
			  {
  			num/10;
  			digits++;
  		       }
		  }
		  num=org;
		  for(;num!=0;)
		  {
		  	r=num%10;
		  	num=num/10;
		  	res=1;
		  	for(i=1;i<=digits;i++)
			  {
		  		res=res*r;
			  }
           sum=sum+res;
		  }
		  if(sum==org)
		  printf("%d\t",sum);
	  }
	  return 0;
  }
