//WAP to find the number of times a given word appears in the given string
#include<stdio.h>
#include<string.h>
int main()
{
	int len,i,count,flag=0,j;
	char str[30],word[20];
	
	printf("enter the string\n");
	gets(str);
	
	printf("enter the word yor are looking for\n");
	gets(word);
	
	len=strlen(word);
	
	for(i=0;str[i]!='\0';i++)
	{
		count=1;
		if(str[i]==word[0])
	   	{ 
		for(j=0;j<len;j++)
		{
			if(str[j+i]!=word[j])
			{
				count=0;
				break;
			}
        } 
		if(count==1)
	           flag++;   	  	
	    }  
	         
	}
	if(count==0)
	printf("sorry word is not present here\n");
	
	else
	printf("%s appears %d times here\n",word,flag);
	
	return 0;
}
