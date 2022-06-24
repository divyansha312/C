//WAP to input a string and check whether the string is palindrome or not
#include<stdio.h>
#include<string.h>

int main()
{
int i,j=0,len,count=0;
char str[30],rev[30];

printf("enter the string\n");
fgets(str,30,stdin);

len=strlen(str)-1;
printf("length of string is %d \n",len);

for(i=len-1;i>=0;i--)
{
	rev[j]=str[i];
	j++;
   }
rev[j]='\0';
   
   printf("string after the reversing is\n");
   fputs(rev,stdout);
   printf("\n");
   
  for(i=0;i<len;i++)
  {
	if(str[i]==rev[i])
	  count++;
	  else
	  break;
  }
if(count==len)
printf("string is palindrome");

else
printf("string is not a palindrome");

return 0;
}
