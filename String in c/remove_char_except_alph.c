//WAP to remove characters from string except alphabets
#include<stdio.h>
int main()
{
	char str[30],ch;
	int i,j;
	
	printf("enter the string\n");
	fgets(str,30,stdin);
	
	for(i=0;str[i]!='\0';i++)
	{
		while(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]==' ')||(str[i]=='\0')))
      {  
		for(j=i;str[j]!='\0';j++)
		{
			str[j]=str[j+1];
		}
		
       } 
		
	}
		
	
	printf("string after removing the characters except alphabet is\n");
	fputs(str,stdout);
	
	return 0;
}
