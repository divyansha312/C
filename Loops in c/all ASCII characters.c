#include<stdio.h>
int main()
{
	int i=0;
	while(i<256)
	{
		printf("%c=%d\t",i,i);
		i++;
	}
	return 0;
}
