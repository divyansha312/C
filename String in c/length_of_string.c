//WAP to find the length of string without using library functions

#include<stdio.h>

int main()

{
	int i, length=0;
	
	char str[30];
	
	printf("enter a string\n");
	
	gets(str);       //fgets is using then length of string will be length-1 or intialise it with -1
	
	for(i=0; str[i]!='\0'; i++)
	
	length++;
	
	printf(" length of string is %d\n",length);
	
	return 0;
	
}
