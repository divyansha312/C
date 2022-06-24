#include<stdio.h>
int main()
{
	int i=65;
	while(i<=90)
	{
	if(i!='A'&&i!='E'&&i!='I'&&i!='O'&&i!='U')
	printf("%c\n",i);	
	i++;
}
printf("\n");
i=97;
while(i<=122)
	{
	if(i!='a'&&i!='e'&&i!='i'&&i!='o'&&i!='u')
	printf("%c\n",i);	
	i++;
	}
	return 0;
}
