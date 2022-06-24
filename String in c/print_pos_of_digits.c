//WAP to input a string and print position of all the digits present in it.

#include<stdio.h>
int main()
{
 int i,flag=0;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 for(i=0;str[i]!='\0';i++)
 {
   if(str[i]>='0'&&str[i]<='9')
   {
   	flag++;
   printf("%c at position %d\n",str[i],i+1);
     }
   	
 }
 if(flag==0)
 printf("sorry digits are not present here\n");
 
 return 0;
}
 
