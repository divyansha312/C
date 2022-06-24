//WAP to enter a string and print it

#include<stdio.h>

int main()

{
	char str[10];
	
	printf("enter a string\n");
	
	scanf("%s",&str);           // scanf doesnot read spaces and overflow
	
   //gets(str);                // gets reads spaces but overflow
   
    //fgets(str,10,stdin);    // fgets read spaces and doesnot overflow
    
	printf("%s\n",str);
	
	return 0;
	
}
