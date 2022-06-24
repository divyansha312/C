//WAP to check whether a letter is uppercase or not
#include<stdio.h>
int main()
{
char ch;

printf("enter the letter you wanna check\n");
scanf("%c",&ch);

if(ch>='A'&&ch<='Z')
printf("letter is in uppercase\n");

else
printf("letter is in lowercase\n");

return 0;
}
