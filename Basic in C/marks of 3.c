#include<stdio.h>

int main()

{
	float a,b,c,total,avg,per;
	
	const int max_marks=300;
	
	printf("enter the marks");
	
	scanf("%f %f %f",&a,&b,&c);
	
	total=a+b+c;
	
	printf("total of 3 subject is %f\n",total);
	
	avg=(a+b+c)/2;
	
	printf("average of 3 subject is %f\n",avg);
	
	per=(total*100)/max_marks;
	
	printf("percentage of 3 subject is %.2f\n",per);
	
	if(per>=95)
	
	printf("FIRST POSITION");
	
	else if(per>=90&&per<95)
	
	printf("SECOND POSITION");
	
	else if(per<90&&per>=85)
	
	printf("THIRD POSITION");
	
	else 
	
	printf ("NO SPECIFIC POSITION WORK HARD");
	
	return 0;
	
}
