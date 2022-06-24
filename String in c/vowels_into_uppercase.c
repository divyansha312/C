//WAP to input a string and convert all vowels into uppercase
#include<stdio.h>
int main()
{
 int i,count=0;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 printf("vowels in uppercase are\n");
 
 for(i=0;str[i]!='\0';i++)
 {
 	if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U'))
 {
   if(str[i]>='a'&&str[i]<='z')
   {
   	str[i]=str[i]-32;
   }
 	printf("%c\t",str[i]);
 }
}
 return 0;
}
