//WAP to print individual character of string in reverse order

#include<stdio.h>

#define max 30

int main()

{
	char str[max];
	
	int i,l=-1;
	
	printf("enter the string\n");
	
	fgets(str,max,stdin);
	
	for(i=0;str[i]!='\0';i++)
	
	   l++;
	
	printf(" length of string is %d\n",l);
	
	printf("characters of string in reverse order are\n");
	
	for(i=l-1;i>=0;i--)
	
	printf("%c",str[i]);
	
   return 0;
	
}
