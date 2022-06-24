#include<stdio.h>
int main()
{
	int num,digit=0;
	printf("enter a number");
	scanf("%d",&num);
	if(num==0)
	digit++;
	else{
	for( ; num!=0; ){
	num=num/10;
	digit++;
      }
        }
      printf("total digits are %d", digit);
	return 0;
}    
