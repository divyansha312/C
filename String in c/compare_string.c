//WAP to compare two strings without using library functions
#include<stdio.h>
#define max1 30
#define max2 30

int main()

{
	char str1[max1], str2[max2];
	
	int l1=0,l2=0,i=0,count=0;
	
	printf("enter the 1st string\n");
	
	gets(str1);
	
	printf("enter the 2nd string\n");
	
	gets(str2);
	
	for(i=0;str1[i]!='\0';i++)
		
		l1++;
	
	for(i=0;str2[i]!='\0';i++)
	
	   l2++;
	
	if(l1!=l2)
	
	printf("length of strings are not equal we can not compare them\n");
	
	else
	{
		
	printf("length of strings are equal we can compare them\n");
	
	i=0;
	
	while(str1[i]!='\0'&&str2[i]!='\0')
   {
   	
   	if(str1[i]==str2[i])
	   {
	   	
	   	count++;
	   }
	   
	   i++;
	   
         }
         
         if(count==l1&&l2)
         
         printf("strings are equal\n");
         
         else
         
         printf("strings are not equal\n");
       }
       
	return 0;
	
}
