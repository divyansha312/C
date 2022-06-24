//WAP to calculate sum from 1 to n numbers using recursion.

#include<stdio.h>
int sum(int);
int main()
{
	int x,S;
	printf("enter the numbers you want\n");
	scanf("%d",&x);
	S=sum(x);
	printf("sum of %d numbers is %d\n",x,S);
	return 0;
}

 int sum(int n)
 {
 	int s;
  if(n==1)
  return n;
  s=n+sum(n-1);
  return s;
 }
