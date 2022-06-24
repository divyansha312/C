//WAP to input a string and convert its first letter into capitalized form.
#include<stdio.h>
int main()
{
 int i;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);

 for(i=0;str[i]!='\0';i++)
 {
 	if(i==0)
 	{
 		if(str[i]>='a'&&str[i]<='z')
 		str[i]=str[i]-32;
 		continue;
	 }
	 if(str[i]==' ')
	 {
	 	i++;
	 	if(str[i]>='a'&&str[i]<='z')
	 	{
	 		str[i]=str[i]-32;
	 		continue;
		 }
	 }
	 else
	 {
	 	if(str[i]>='A'&&str[i]<='Z')
	 	str[i]=str[i]+32;
	 }
 }
 printf("capitalised form of string is\n");
 printf("%s",str);
 
 return 0;
}
