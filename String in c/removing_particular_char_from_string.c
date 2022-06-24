//WAP to remove a particular character from string
#include<stdio.h>
int main()
{
int i,j,count=0;
char str[30],ch;

printf("enter the string\n");
fgets(str,30,stdin);

printf("enter the character you want to remove\n");
scanf("%c",&ch);

for(i=0;str[i]!='\0';i++)
{
	if(str[i]==ch)
	{
		for(j=i;str[j]!='\0';j++)
		{
			str[j]=str[j+1];
			count++;
		}
	}
	
}
if(count!=0){
printf("string after removing the character is \n");
fputs(str,stdout);
}
else
printf("character is not present here\n");
    
return 0;
}
