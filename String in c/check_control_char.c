//WAP to enter the string and check whether the given string contains control characters or not

#include<stdio.h>
#include<string.h>

int main()
{
 int i ,count=0,len;
 char str[30],ch;
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 len=strlen(str)-1;
 
 for(i=0;i<len;i++)
 {
 	ch=str[i];
 	if(ch>=0&&ch<=31)
 	count++;
 }
 if(count!=0)
 printf("string contains control characters");

else
 printf("string does not contains control characters");
 
 return 0;
}
