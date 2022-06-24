//WAP to input a string and print all the special charactersin it

#include<stdio.h>
#include<string.h>

int main()
{
 int i,count=0,len;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 len=strlen(str)-1;
 
 printf("special characters are\n");
 
 for(i=0;i<len;i++)
 {
 	if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||(str[i]==' ')))
 	printf("%c\n",str[i]);
 }
 
 return 0;
 
}
