//WAP to input a character array and print all the consonants of the character array
#include<stdio.h>
int main()
{
	int i,n;
	char arr[100],ch;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%c",&arr[i]);
	}
	printf("array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%c\n",arr[i]);
	}
	printf("consonent elements are\n");
	for(i=0;i<n;i++){
		ch=arr[i];
		if(ch>='A'&&ch<='Z')
		ch=ch+32;
		if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
		{
			printf("%c\n",arr[i]);
		}
	}
	return 0;
}
