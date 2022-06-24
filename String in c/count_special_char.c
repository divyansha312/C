//WAP to enter the string and count the total number of special symbols in it

#include<stdio.h>
#include<string.h>

int main()
{
 int i ,count=0,len;
 char str[30],spl_char;
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 len=strlen(str)-1;
 
 printf("special characters in string are\n");
 
 for(i=0;i<len;i++)
 {
 	if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||(str[i]==' ')))
 	{
 	count++;
 	spl_char=str[i];
 	printf("%c\n",spl_char);
     }
 }
 printf(" total special characters are %d\n",count);
 

 
 return 0;
}
