//WAP to create an array of size 3*10 containing mul tables of the numbers 2,7,9 respectively.

#include<stdio.h>
void printtable(int *multable,int num,int n);
void printtable(int *multable,int num,int n)
{
	int i;
	printf("The table of %d is:\n",num);
	for(i=0;i<10;i++)
	{
		multable[i]=num*(i+1);
	}
		for(i=0;i<10;i++)
	{
		printf("%dX%d= %d\n",num,i+1,multable[i]);
	}
	printf("********************************************\n");
}
int main()
{
	int multable[3][10];
	printtable(multable[0],2,10);
	printtable(multable[1],7,10);
	printtable(multable[2],9,10);
	
	return 0;
}
