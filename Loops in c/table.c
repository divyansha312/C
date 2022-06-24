#include<stdio.h>
int main()
{ 
int n,i;
printf("\nEnter the number:");
scanf("%d",&n);
printf("\nthe table of %d is:",n);
for(i=1;i<=10;i++)
   {
   	printf("\n%d*%d=%d",n,i,n*i);
      
   }
   return 0;

}
