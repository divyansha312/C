//WAP to remove digits from string.
#include<stdio.h>
int main()
{
	char str[30],ch;
	int i,j;
	
	printf("enter the string\n");
	fgets(str,30,stdin);
	
	for(i=0;str[i]!='\0';i++)
	{
		while((str[i]>='0')&&(str[i]<='9'))
      {  
		for(j=i;str[j]!='\0';j++)
		{
			str[j]=str[j+1];
		}
		
       } 
		
	}
		
	printf("string after removing the digits is\n");
	fputs(str,stdout);
	
	return 0;
}
