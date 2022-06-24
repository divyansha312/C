//WAP to check whether a character is digit or not
#include<stdio.h>
int main()
{
char ch;

printf("enter the character you want to check\n");
scanf("%c",&ch);

if(ch='0'&&ch<='9')
printf("character is a digit\n");

else
printf("character is not a digit\n");
   
return 0;
}
