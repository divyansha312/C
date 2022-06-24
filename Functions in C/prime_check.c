//WAP to check whether a number is prime or not.
#include<stdio.h>
int prime(int);
int main()
{
  int a,p;
  printf("enter the number\n");
  scanf("%d",&a);
  p=prime(a);
  if(p==0)
  printf("%d is a prime num\n",a);
  else
  printf("%d is not a prime num\n",a);
  return 0;
}

int prime(a)
{
	int i,flag=0;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	return 0;
	
	else
	return 1;
}
