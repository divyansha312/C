//WAP to input a string and find the last occurence of the character

#include<stdio.h>
#include<string.h>
int main()
{
 int i,flag=0,len;
 char str[30],ch;
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 len=strlen(str)-1;
 
 printf("enter the character you're looking for\n");
 scanf("%c",&ch);
 
 for(i=len;i>=0;i--)
 {
 	if(str[i]==ch)
 	{
 		flag=1;
 		break;
	 }
 }
 if(flag==1)
 printf("last occurence of %c is at position %d\n",ch,i+1);
 
 else
 printf("sorry character is not present here\n");
 
 return 0;
}
