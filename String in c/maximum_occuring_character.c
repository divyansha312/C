//WAP to find the maximum occuring character in a string
#include<stdio.h>
#include<string.h>

int main()

{
	int max_count=0,count,i=0,j=0,len;
	
	char str[40];
	char max_rep;
	
	printf("enter the string\n");
	gets(str);
	
	len=strlen(str);
	printf("length of string is %d\n",len);
	
	for(i=0;i<len;i++)
	{
		count=1;
		
		for(j=i+1;j<len;j++)
		{
			if((str[i]==str[j])&&(str[i]!='0')&&(str[i]!=' '))
			{
				count++;
				str[j]='0';
			}
		}
		if(max_count<count)
		{
			max_count=count;
		  max_rep=str[i];
		}
	}

if(max_count!=1)
printf("maximum occuring character in a string is %c and it occurs %d times\n",max_rep,max_count);

else
printf("all characters occur only one time");

	return 0;
	
}
