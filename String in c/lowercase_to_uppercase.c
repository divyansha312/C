//WAP to covert a string into uppercase
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
printf("length of string is %d\n",l);

for(i=0;i<l;i++)
{
	if(str[i]>='a'&&str[i]<='z')
	str[i]=str[i]-32;
}
printf("our string in UPPERCASE is\n");

fputs(str,stdout);

return 0;
}
