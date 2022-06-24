//WAP to replace the spaces of a string with a specific character
#include<stdio.h>
int main()
{
	int i;
char str[30],ch;

printf("enter the string\n");
fgets(str,30,stdin);

printf("enter the character you want to replace with spaces\n");
scanf("%c",&ch);

for(i=0;str[i]!='\0';i++)
{
	if(str[i]==' ')
	str[i]=ch;
}

printf("string after replacing spaces with %c is\n",ch);
fputs(str,stdout);

return 0;
}
