//WAP to copy one string to another string
#include<stdio.h>
#define max1 30
#define max2 30

int main()

{
	char str1[max1], str2[max2];
	int i;
	
	printf("enter the string to be copied\n");
	
	fgets(str1,max1,stdin);
	
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	printf("string after copying is\n");
   
   fputs(str2,stdout);
   
	return 0;
	
}
