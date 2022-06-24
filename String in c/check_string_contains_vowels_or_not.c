//WAP to input a string and check whether the string contains vowels or not
#include<stdio.h>
int main()
{
 int i,count=0;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 for(i=0;str[i]!='\0';i++)
 {
 	if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U'))
 	count++;
 }
 
 if(count!=0)
 printf("string contains vowels\n");
 
 else
 printf("string doesnot contains vowels\n");
 
 return 0;
}
