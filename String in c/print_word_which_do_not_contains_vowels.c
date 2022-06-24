//WAP to input a string and print the word which does not contains vowels

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,k,len,flag;
	char str[50],ch[30];
	
	printf("enter the string\n");
	fgets(str,30,stdin);
	
	len=strlen(str)-1;
//printf("%d\n",len);

printf("words which do not contains vowels are\n");
for(i=0;i<len;i++)
{ 
	if(str[i]!=' ')
	{
		ch[j]=str[i];
		j++;
	}
   if(str[i]==' '||i==len-1)
	{
		ch[j]='\0';
		flag=0;
		
		for(k=0;ch[k]!='\0';k++)
		{ 
			if((ch[k]=='a'||ch[k]=='e'||ch[k]=='i'||ch[k]=='o'||ch[k]=='u')||(ch[k]=='A'||ch[k]=='E'||ch[k]=='I'||ch[k]=='O'||ch[k]=='U'))
			{ 
			  flag=1;
			  break;
			}
	          }
	        	if(flag==0)
			printf("%s\n",ch);
		j=0;
	}
	
}
   
return 0;

}

