//WAP to input a string and find the first occurence of the character

#include<stdio.h>
int main()
{
 int i,flag=0;
 char str[30],ch;
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 printf("enter the character you're looking for\n");
 scanf("%c",&ch);
 
 for(i=0;str[i]!='\0';i++)
 {
 	if(str[i]==ch)
 	{
 		flag=1;
 		break;
	 }
 }
 if(flag==1)
 printf("first occurence of %c is at position %d\n",ch,i+1);
 
 else
 printf("sorry character is not present here\n");
 
 return 0;
}
