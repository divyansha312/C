 //WAP to extract substring from string

#include<stdio.h>
int main()
{
	char str[30], sub_str[10];
	int pos, len, i, j=0;
	
	printf("enter the string\n");
	fgets(str,30,stdin);
	
	printf("enter the position and length of string you want\n");
	scanf("%d %d",&pos,&len);
	
	i=pos-1;
	
	while(j<len)
	{
		sub_str[j]=str[i];
		j++;
		i++;
	}
	sub_str[j]='\0';
	
	printf("sub string is\n");
	fputs(sub_str,stdout);
	
	return 0;
}
