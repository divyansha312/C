//WAP to find the frequency of characters in string
#include<stdio.h>
int main()
{
int count=0,i;
char str[30],ch,c,cha;
printf("enter the string\n");
fgets(str,30,stdin);

printf("enter the character whose frequency you have to find\n");
fflush(stdin);
scanf("%c",&ch);

cha=ch;
	if(ch>='A'&&ch<='Z')
	 ch=ch+32;
		
for(i=0;str[i]!='\0';i++)
{
	c=str[i];
	if(c>='A'&&c<='Z')
		c=c+32;
	if(ch==c)
	{
	count++;
    }
}

if(count!=0)
printf("frequency of %c is %d\n",cha,count);
else
printf("character is not present\n");

return 0;
}
