#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	printf("character is a lowercase");
	else if(ch>='A'&&ch<='Z')
	printf("character is a uppercase");
	else
	printf("this is not a lowercase or uppercase");
	return 0;
}
