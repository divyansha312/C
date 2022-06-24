//WAP to print only the string before new line character
#include<stdio.h>
int main()
{
int i;	
char str[30];

printf("enter the string\n");
fgets(str,30,stdin);

for(i=0;str[i]!='\0';i++);

printf("string before new line character\n");
fputs(str,stdout);

return 0;
}
