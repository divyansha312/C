#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character you want to check");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("this is a vowel");
	else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	printf("this is a consonant");
	else 
	printf("thi is not a character");
	return 0;
}
