//WAP to calculate the length of string

#include<stdio.h>
int length(char*);
int main()
{
	int L;
	char str[30];
	printf("enter the string\n");
	fgets(str,30,stdin);
	L=length(str);
	printf("length of string is %d\n",L);
	return 0;
}
int length(char* string)
{
	int i,len=-1;
	for(i=0;string[i]!='\0';i++)
	{
		len++;
	}
	return len;
}
