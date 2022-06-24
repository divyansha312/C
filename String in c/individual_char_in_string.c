// WAP to separate the individual character from a string

#include<stdio.h>

int main()

{
 int i;
	
 char str[30];
 
 printf("enter a string\n");
 
 fgets(str,30,stdin);
 
 printf("individual characters are\n");
 
 for(i=0;str[i]!='\0';i++)
 
 printf("%c\t",str[i]);
 	
return 0;
	
}
