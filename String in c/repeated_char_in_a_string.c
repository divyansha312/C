//WAP to find the repeated characters in a given string
#include<stdio.h>
int main()
{
int i,j,count=0,max_count=0,len=-1;
char str[30],ch,max_ch;

printf("enter the string\n");
fgets(str,30,stdin);

	for(i=0; str[i]!='\0'; i++)
	 len++;

for(i=0;i<len;i++)
{
	count=0;
	for(j=i;j<len;j++)
{
	if(str[i]==str[j]&&str[i]!=' ')
	{
	count++;
        }
          } 
   ch=str[i];                               
   if(count>max_count)
   {
   	max_count=count;
   	max_ch=ch;
   }
      }
	  if(max_count!=1) 
      printf("maximum repeating character is %c and it occurs %d times\n",max_ch,max_count);
      else
      printf("there's no maximum repeating character every character occurs once here\n");
      
return 0;
}
