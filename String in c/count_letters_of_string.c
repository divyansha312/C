//WAP to count the total number of letters in string

#include<stdio.h>
#define max 30

int main()

{
	int i,count=0;
	
	char str[max];
	
	printf("enter the string\n");
	
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
		count++;
	    }  
	} 
	
	printf("total letters in string are %d\n",count);
	
	return 0;
	
}
