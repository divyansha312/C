#include<stdio.h>
int check(int,int);
int main()
{ 
  int a,b,c;
  printf("enter the numbers to be check\n");
  scanf("%d %d",&a,&b);
  c=check(a,b);
  printf("%d is the greatest number\n",c);
  return 0;
}

int check(int a, int b)
{
 if(a>b)
 return a;
 else
 return b;
	
}
