//WAP to find the largest and smallest word in a string

#include<stdio.h>
int main()
{
int i,j=0,lar=0,sml=0,count;
char str[30],large[10],small[10];

printf("enter the string\n");
gets(str);

for(i=0;str[i]!='\0';i++)
{
	count=0;
	if(str[i]!=' ')
	{
	for(j=i;str[j]!='\0';j++)
	{
		count++;
		}	
	if(count>lar)
	{
		lar=count;
	}
   if(count<lar)
	{
		sml=count;
	}
   }
   i=j;
}

printf("smallest word is %d and largest word is %d\n",sml,lar);
return 0;
}
