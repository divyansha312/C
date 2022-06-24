//WAP to print n natural numbers using recursion

#include<stdio.h>
void print(int);
int main()
{
	int n;
	printf("enter the numbers you want\n");
	scanf("%d",&n);
	printf("first %d naural numbers are\n",n);
	print(n);
	return 0;
}

void print(int x)
{
  if(x>=1)
  {
  print(x-1);
  printf("%d\n",x);	
   }
}

