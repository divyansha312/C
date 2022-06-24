//WAP to concatenate two strings

#include<stdio.h>
int main()
{
int i,j,l1=-1,l2=-1;
char str1[30],str2[30],str[60];

printf("enter the string1\n");
fgets(str1,30,stdin);

printf("enter the string2\n");
fgets(str2,30,stdin);

for(i=0;str1[i]!='\0';i++)
l1++;
//printf("length of string1 is %d\n",l1);

for(i=0;str2[i]!='\0';i++)
l2++;
//printf("length of string2 is %d\n",l2);

for(i=0,j=0;i<l1;i++,j++)
{
	str[j]=str1[i];
}
	str[j]=' ';
	j++;
	
for(i=0;i<l2;i++,j++)
{
	str[j]=str2[i];
}

printf("string after concatenation is\n");
fputs(str,stdout);

return 0;
}
