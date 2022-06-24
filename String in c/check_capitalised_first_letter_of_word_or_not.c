//WAP to input a string and check whether string is in capitalized form or not.
#include<stdio.h>
#include<string.h>
int main()
{
 int i,len,count=0;
 char str[30];
 
 printf("enter the string\n");
 fgets(str,30,stdin);
 
 len=strlen(str)-1;

 for(i=0;i<len;i++)
 {
 	if(i==0)
 	{
 		if(str[i]>='A'&&str[i]<='Z')
 		 count++;
 		continue;
	 }
	 if(str[i]==' ')
	 {
	  count++;
	 	i++;
	 	if(str[i]>='A'&&str[i]<='Z')
	 	{
	 		count++;
	 		continue;
		 }
	 }
	 else
	 {
	 	if(str[i]>='a'&&str[i]<='z')
	    count++;
	 }
	 
 }
 
if(count==len)
printf("string is in capitalised form\n");

else
printf("string is not in capitalised form\n");
 
 return 0;
}
