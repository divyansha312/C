//WAP to find the last occurence of a word in a string

#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,flag,len;
 char str[30],word[10];
 
 printf("enter the string\n");
 gets(str);
 
 len=strlen(str);
 printf("%d\n",len);
 
 printf("enter the word you want to search\n");
 scanf("%s",word);
 
 for(i=len;i>=0;i--)
 {
 	if(str[i]==word[0])
 	{
 		flag=1;
 		for(j=0;word[j]!='\0';j++)
 		{
 			if(str[i+j]!=word[j])
 			{
 				flag=0;
 				break;
			 }
		 }
	 }
	 if(flag==1)
	 {
	 	break;
	 }
 }
 
 if(flag==0)
 printf("sorry word is not present here\n");
 
 else
 printf("last occurence of '%s' is at position %d\n",word,i+1);
 
 return 0;
}
