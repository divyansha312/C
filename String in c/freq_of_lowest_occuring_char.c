//WAP to input a string and find the lowest frequency character in the string.

#include<stdio.h>
#include<string.h>
int main()
{
 int i,flag,j,len;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 len=strlen(str)-1;
 
 printf("lowest occuring characters are\n");
 for(i=0;i<len;i++)
 {
 	flag=1;
 	for(j=i+1;j<len;j++)
 	{
 		if(str[i]==str[j])
 		{
 			flag++;
 			str[j]='0';
		 }
	 }
	 if(flag==1&&str[i]!=' '&&str[i]!='0')
	 printf("%c\n",str[i]);
 }
 
 return 0;
}
