//WAP to input a string and find duplicate characters from the string
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,count,len;
char str[30],ch;

printf("enter the string\n");
fgets(str,30,stdin);

len=strlen(str)-1;
//printf("length of string is %d\n",len);

printf("duplicate characters are\n");
for(i=0;i<len;i++)
{ 
	count=0;
	for(j=i+1;str[j]!='\0';j++)
	{
		if(str[i]==str[j]&&str[i]!=' ')
		{
			count++;
			str[j]='0';
	    }
    } 
  if(count!=0&&str[i]!='0')
  printf("%c\t",str[i]);
}
return 0;
}
