#include<stdio.h>
int main()
{
	int i,n,count=0;
	char arr[10],ch;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%c",&arr[i]);
	}
		printf("vowels elements are\n");
	for(i=0;i<n;i++){
		ch=arr[i];
		if(ch>='A'&&ch<='Z')
		ch=ch+32;
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf("%c\n",arr[i]);
			count++;
		}
	}
	printf(" vowels elements are %d\n",count);
		return 0;
	}
