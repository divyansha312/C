//WAP to count the total words of string
#include<stdio.h>
#define max 30

int main()

{
	int i=0,count=0;
	
	char str[max];
	
	printf("enter the string\n");
	
	gets(str);
	
	while(str[i]!='\0')
	{
		
		if(str[i]!=' ')
		i++;
		
		else
		{
		count++;
		i++;
	      }
	}
	printf("total words in string are %d\n",count+1);
	
	return 0;
	
}

