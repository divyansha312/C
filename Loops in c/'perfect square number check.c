#include<stdio.h>
int main()
{
	int num,i=0,sqr,count=0;
	printf("enter the number you want to check");
	scanf("%d",&num);
	if(num<0)
		printf(" negative value can not be perfect square");
	else{
		sqr=i*i;
		for( ;sqr<=num; ){
			if(sqr==num){
			count=1;
			break;
		}
	i++;
	sqr=i*i;	
	}
	if(count==1)
	printf("perfect square");
	else
	printf(" not a perfect square");
      }
	return 0;
}
