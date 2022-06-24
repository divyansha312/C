//WAP to check whether a string is alphanumeric or not
#include<stdio.h>
#include<string.h>


int main()
{
 int i,count=0,len;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 len=strlen(str)-1;
 
 for(i=0;str[i]!='\0';i++)
 {
 	if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||(str[i]==' '))
 	count++;
 	
 }
 if(count==len)
 printf("string is a alphanumeric\n");
 
 else
 printf("string is not a alphanumeric\n");
 
 return 0;
}
