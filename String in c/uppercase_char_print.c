//WAP to input a string and print all the uppercase characters in it
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

printf("uppercase characters in string are\n");

for(i=0;i<l;i++)
{
	if(str[i]>='A'&&str[i]<='Z')
	printf("%c\t",str[i]);
}

return 0;
}
