//WAP to input a string and check whether the string contains special character or not.
#include<stdio.h>
#include<string.h>

int main()
{
 int i,count=0,len;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 len=strlen(str)-1;
 
 for(i=0;i<len;i++)
 {
 	if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||(str[i]==' ')))
 	count++;
 }
 
 if(count!=0)
 printf("string contains special characters\n");
 
 else
 printf("string doesnot contains special characters\n");
 
 return 0;
 
}
