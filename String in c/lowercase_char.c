//WAP to input a string and print all the lowercase characters in it
#include<stdio.h>
int main()
{
int i,l=-1;
char str[30];

printf("enter the string\n");
fgets(str,30,stdin);

for(i=0;str[i]!=0;i++)
{
	l++;
}
//printf("length of string is %d\n",l);

printf("lowercase characters in string are\n");

for(i=0;i<l;i++)
{
	if(str[i]>='a'&&str[i]<='z')
	printf("%c\t",str[i]);
}

return 0;
}
