#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	printf("character is a alphabet");
	else if (ch>='0'&&ch<='9')
	printf("character is a digit");
	else 
	printf("character is a special symbol");
	return 0;
}
