//WAP to count total number of vowels and consonant in string
#include<stdio.h>
#define max 30

int main()

{
	int vow,cons,i;
	
	char str[max];
	
	printf("enter the string\n");
	
	gets(str);
	
	
	vow=cons=i=0;
	
	while(str[i]!='\0')
	
	{
		if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
		
		{
	
	if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U'))
	
     vow++;
     
    else 
    
  cons++;
    
         }

  i++;
  
        }
        
       
        printf("total vowels are %d\n",vow);
        
         printf("total consonant are %d\n",cons);
  
	return 0;
	
}
