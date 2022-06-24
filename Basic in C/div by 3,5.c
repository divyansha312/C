#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n%3==n%5)
printf("no is divisible by both ");
else if (n%5==0)
printf("no is divisible by 5");
else if(n%3==0)
printf("no is divisible by 3");
else
printf("no is not divisible by 3 or 5");
return 0;
}
