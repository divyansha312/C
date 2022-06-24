//WAP to read a file and remove the spaces between two words of its content
#include<stdio.h>
int main()
{
int i,j;
char str[30];

printf("enter the string\n");
fgets(str,30,stdin);

for(i=0;str[i]!='\0';i++)
{
	while(str[i]==' ')
	{ 
	for(j=i;str[j]!='\0';j++)
	str[j]=str[j+1];
    }
}
    
	printf("string after removing spaces is\n");
	fputs(str,stdout);
   
return 0;
}
