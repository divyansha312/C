//WAP to input character array and copy vowel characters to the second array
#include<stdio.h>
int main()
{
	int i,n,j=0,count=0;
	char arr[10],ch,vrr[10];
	printf("enter the size of an array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%c",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		ch=arr[i];
		if(ch>='A'&&ch<='Z')
		ch=ch+32;
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			count++;
			vrr[j]=ch;
			j++;
		}
	}
	
	printf("vowel elements into new array are\n");
	
	for(j=0;j<count;j++){
		printf("%c\n",vrr[j]);
	}
	
		return 0;
	}
