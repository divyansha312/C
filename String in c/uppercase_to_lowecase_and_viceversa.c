//WAP to read a sentence and replace lowercase characters by uppercase and vice-versa
#include<stdio.h>
int main()
{
	int i;
	char str[30];
	
	printf("enter the string\n");
	fgets(str,30,stdin);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		str[i]=str[i]+32;
		else
		{
			if(str[i]>='a'&&str[i]<='z')
		    str[i]=str[i]-32;
		}
	}
	printf("string after changing is\n");
	fputs(str,stdout);
	
	return 0;
}
