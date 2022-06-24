#include<stdio.h>
int main()
{
	int num,rev=0,r;
	printf("enter the number");
	scanf(" %d,",&num);
	for( ;num!=0; )
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
	}
	for( ;rev!=0; )
	 {
	 	r=rev%10;
	 	rev=rev/10;
	switch(r){
		case 0:printf("zero\n");
		break;
			case 1:printf("one\n");
		break;
			case 2:printf("two\n");
		break;
			case 3:printf("three\n");
		break;
			case 34:printf("four\n");
		break;
			case 5:printf("five\n");
		break;
			case 6:printf("six\n");
		break;
			case 7:printf("seven\n");
		break;
			case 8:printf("eight\n");
		break;
			case 9:printf("nine\n");
		break;
	}	
}
	return 0;
}
