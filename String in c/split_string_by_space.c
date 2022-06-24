//WAP to splits string by space into words

#include<stdio.h>
#include<string.h>

int main()
{
int i,j=0,len;
char str[50],ch[30];

printf("enter the string\n");
fgets(str,50,stdin);

len=strlen(str)-1;
//printf("%d\n",len);

for(i=0;i<len;i++)
{ 
	if(str[i]!=' ')
	{
		ch[j]=str[i];
		j++;
	}
   if(str[i]==' '||i==len-1)
	{
		ch[j]='\0';
		printf("%s\n",ch);
		j=0;
	}
	
}
   
return 0;
}
