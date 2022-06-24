//Write a menu driven program to input an array of 10 integer and print palindrome no,perfect no,strong no,perfect sqr no, armstrong no.

#include<stdio.h>
#include<stdlib.h>
#define max 20

void palindrome(int[],int);

void perfect(int[],int);

void strong(int[],int);

void perfect_sqr(int[],int);

void armstrong(int[],int);

int main()
{
	int arr[max],n,i,choice=0;
	
	printf("enter the size of array\n");
	scanf("%d",&n);
	
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&arr[i]);
	}
	while(1)
	{
	printf("1.palindrome num\n 2.Perfect num\n 3.Strong num\n 4.Perfect sqr num\n 5.Armstrong num\n 6.Enter a valid choice\n 7.EXIT\n");
	
	printf("enter your choice\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		palindrome(arr,n);
	}
	else if(choice==2)
	{
        perfect(arr,n);
	}
	else if(choice==3)
	{
        strong(arr,n);
	}
	else if(choice==4)
	{
        perfect_sqr(arr,n);
	}
	else if(choice==5)
	{
        armstrong(arr,n);
	}
		else if(choice==7)
	{
		printf("********************************************************************************************\n");
		printf("EXITING.....");
        exit(0);
	}
		else
	{
		printf("********************************************************************************************\n");
		
       printf("please enter a valid option\n");
       
       printf("********************************************************************************************\n");
	}
	
    }
	return 0;
}

 void palindrome(int arr[],int n)
 {
 	int num,i,rev,r,check=0;
 	printf("********************************************************************************************\n");
 	printf("palindrome numbers are\n");
 	for(i=0;i<n;i++)
 	{
	    rev=0;
 		num=arr[i];
 		while(num!=0)
 		{
 			r=num%10;
 			rev=rev*10+r;
 			num=num/10;
		 }
		 if(arr[i]==rev)
		 {
		 	check++;
		 	printf("%d\n",arr[i]);
		 }
	 }
	 if(check==0)
	 printf("palindrome number not found\n");
	 printf("********************************************************************************************\n");
 }
 
 void perfect(int arr[],int n)
 {
 	int i,num,per=0,check=0,j;
 	printf("********************************************************************************************\n");
 	
 	printf("perfect numbers are:\n");
 	
 	for(i=0;i<n;i++)
 	{
 		num=arr[i];
 		for(j=1;j<=num/2;j++)
 		{
 			if(num%j==0)
 			{
 				per=per+j;
 				
			 }
 			
		 }
		 if(arr[i]==per)
		 {
		 	check++;
		 	printf("%d\n",arr[i]);
		 }
 		
	 }
	 if(check==0)
	 printf("perfect number not found\n");
	 
	 printf("********************************************************************************************\n");
 	
 }
 
 void strong(int arr[],int n)
 {
 	int i,fact,num,sum,check=0,r,j;
 	
 	printf("********************************************************************************************\n");
 	
 	printf("strong numbers are\n");
 	
 	for(i=0;i<n;i++)
 	{
 		sum=0;
 		num=arr[i];
 		while(num!=0)
 		{
 			fact=1;
 			r=num%10;
 			num=num/10;
 			for(j=1;j<=r;j++)
 			{
 			fact=fact*j;
 		      }
 		      sum=sum+fact;
		 }
		 
		 if(arr[i]==sum)
		 {
		 	check++;
		 	printf("%d\n",arr[i]);
		 }
 		
	 }
	 if(check==0)
	 printf("strong number is not present here\n");
	 
	 printf("********************************************************************************************\n");
 	
 }
 void perfect_sqr(int arr[],int n)
 {
 	int i,num,check=0,j;
 	
 	printf("********************************************************************************************\n");
 	
 	printf("perfect square numbers are\n");
 	
 	for(i=0;i<n;i++)
 	{
 		num=arr[i];
 		for(j=1;j<=num/2;j++)
 		{
 			if(j*j==num)
 			{
 			check=1;
 			break;
 		     }
 			if(j*j>num)
 			{
 			check=0;
 			break;
 		      }
		 }
		 if(check==1)
		 printf("%d\n",arr[i]);
		 
	 }
	 if(check==0)
	 printf("perfect square is not present here\n");
 	
 	printf("********************************************************************************************\n");
 }
 void armstrong(int arr[],int n)
 {
 	int i,j,num,digits,sum=0,check=0,m,r;
 	
 	printf("********************************************************************************************\n");
 	
 	printf("armstrong numbers are\n");
 	
 	for(i=0;i<n;i++)
 	{
 		num=arr[i];
 		digits=0;
 		while(num!=0)
 		{
 			digits++;
 			num=num/10;
		 }
		 num=arr[i];
		 sum=0;
		 while(num!=0)
		 {
		 	r=num%10;
		 	num=num/10;
		 	m=1;
		 	for(j=0;j<digits;j++)
		 	{
		 		m=m*r;
			 }
			 sum=sum+m;
		 }
		 if(sum==arr[i])
		 {
		 	check=1;
		 	printf("%d\n",arr[i]);
		 }
	 }
	 if(check==0)
	 printf("armstrong number are not present here\n");
 	
 	printf("********************************************************************************************\n");
 	
 }
