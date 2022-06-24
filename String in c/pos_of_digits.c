//WAP to input a string and print positions of all the digit presents in the string

#include<stdio.h>
int main()
{
 int i,pos;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 for(i=0;str[i]!='\0';i++)
 {
   if(str[i]>='0'&&str[i]<='9')
   printf("%c is found at position %d\n",str[i],pos=i+1);
   	
 }
 
 return 0;
}
