//WAP to input a string and print all the occurences of given character

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
 	flag++;
 	printf("%c is found at position %d\n",ch,i+1);
      }
 }
 if(flag==0)
 printf("sorry charcter is not present here\n");
 
 return 0;
}
