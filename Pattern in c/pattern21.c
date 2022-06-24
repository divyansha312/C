#include <stdio.h>
int main()
{
 int i, j;
 for(i = 1; i <= 5; i++)
 {
  for(j = i; j <5; j++)
  {
   printf(" ");
  }
  for(j = 1; j <= i; j++)
  {
   if(j == 1 || i == 5)
   {
    if(j==1 && i!=5)
    printf("%d", j);
    if(i==5)
    printf("%d ", j);
   }
   
   else
   {
    printf(" ");
   }
  }
  for(j = 1; j < i; j++)
  {
   if(j == i-1 && j < 4)
   {
    printf("%d", j+1);
   }
   else
   {
    printf(" ");
   }
  }
  printf("\n");
 }
 return 0;
}
