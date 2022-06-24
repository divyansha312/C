//WAP to input a string and print all the alphabets in it

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

printf("all alphabets in string are\n");

for(i=0;i<l;i++)
{
	if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
	printf("%c\t",str[i]);
}

return 0;
}
