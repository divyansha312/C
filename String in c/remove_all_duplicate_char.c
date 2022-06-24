//WAP to input a string and remove duplicate characters from the string.
#include<stdio.h>
int main()
{
int i,j,k,len=-1;
char str[30];

printf("enter the string\n");
fgets(str,30,stdin);

for(i=0;str[i]!='\0';i++)
{
len++;
}
printf("length of string is %d\n",len);

for(i=0;i<len;i++)
{
	for(j=i+1;str[j]!='\0';j++)
	{
	if(str[i]==str[j])
	{	
      	for(k=j;str[k]!='\0';k++)
      	{
      	str[k]=str[k+1];
	    }
	}      
       }
}
	  
   printf("string after removing the duplicate character is\n");
   fputs(str,stdout); 
   
return 0;
}
