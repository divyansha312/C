//WAP to input two string and check whether a string is anagram or not
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,len1,len2,len,count=0;
char str1[30],str2[30];

printf("enter the string1\n");
fgets(str1,30,stdin);
len1=strlen(str1)-1;
printf("length of string1 is %d\n",len1);

printf("enter the string2\n");
fgets(str2,30,stdin);
len2=strlen(str2)-1;
printf("length of string2 is %d\n",len2);

if(len1==len2)
{
	len=len1;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			if(str1[i]==str2[j])
			{
			count++;
			str2[j]='0';
			break;
	            }
			
		}
	}
	if(count==len)
	{
		printf("strings are anagram\n");
	}
	
	else
	printf("strings are not anagram\n");
}
else
printf("strings are not anagram\n");


	

return 0;
}
