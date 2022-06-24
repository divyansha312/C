//WAP to input a string and print all vowels in it
#include<stdio.h>
int main()
{
 int i;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 printf("vowels in string are\n");
 
 for(i=0;str[i]!='\0';i++)
 {
 	if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U'))
 {
 	printf("%c\t",str[i]);
 }
}
 return 0;
}
