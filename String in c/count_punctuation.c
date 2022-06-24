//WAP to count the number of punctuation characters exists in a string
#include<stdio.h>
int main()
{
int i,count=0;
char str[30];

printf("enter the string\n");
fgets(str,30,stdin);

for(i=0;str[i]!='\0';i++)
{
	if((str[i]==';')||(str[i]=='.')||(str[i]=='?')||(str[i]==':')||(str[i]==',')||(str[i]=='\'')||(str[i]=='\"')||(str[i]=='!')||(str[i]=='-'))
	count++;
}
    printf("total punctuation character in string is %d",count);
    
return 0;
}
