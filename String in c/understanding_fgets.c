#include<stdio.h>
int main()
{
 char str[25];
 int i;
 printf("enter your string:\n");
 fgets(str,25,stdin);
 for(i=0;str[i]!='\0';i++)
 {
  printf("\nat index %d the character is %c",i,str[i]);
 }
 printf("after coming out of loop the value of i is %d because it has encountered one more character that is null character",i);
 return 0;
 
}
