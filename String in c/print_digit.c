//WAP to input a string and print all the digits in it

#include<stdio.h>
int main()
{
 int i;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 printf("all digits in the string\n");
 
 for(i=0;str[i]!='\0';i++)
 {
   if(str[i]>='0'&&str[i]<='9')
   printf("%c\n",str[i]);
   	
 }
 
 return 0;
}
 
