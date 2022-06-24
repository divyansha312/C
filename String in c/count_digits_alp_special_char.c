//WAP to count total number of alphabets,digits and special characters in string
#include<stdio.h>
#define max 30

int main()

{
	int alp, digits, spcl_ch,i;
	
	char str[max];
	
	printf("enter the string\n");
	
	gets(str);
	
	alp=digits=spcl_ch=i=0;
	
	while(str[i]!='\0')
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		alp++;
		
		else if(str[i]>='0'&&str[i]<='9')
		digits++;
		
		else
		if(str[i]!=' ')
		spcl_ch++;
		
		i++;
		
	}

  printf("total alphabets in string are %d\n",alp);
  
  printf("total digits in string are %d\n",digits);
  
  printf("total special character in string are %d\n",spcl_ch);

	return 0;
	
}
