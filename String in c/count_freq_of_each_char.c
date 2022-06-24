//WAP to count of each character in a given string

#include<stdio.h>
int main()
{
int i,len=-1,count,j;
char str[30];

printf("enter the string\n");
fgets(str,30,stdin);

for(i=0;str[i]!='\0'; i++)
len++;

for(i=0;i<len;i++)
{
	count=1;
	for(j=i+1;j<len;j++)
      {
	if(str[i]==str[j])
	{
	count++;
	str[j]='0';
        }
          }
          if(str[i]!=' '&&str[i]!='0')
		  printf("%c occurs %d times\n",str[i],count); 
      }
   
return 0;
}
