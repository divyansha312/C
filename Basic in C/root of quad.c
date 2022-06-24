#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D,R1,R2,imag_part,real_part;
	printf("enter coefficient a,b,c");
	scanf("%f %f %f",&a,&b,&c);
	D=b*b-4*a*c;
	if(D>0)
	{
	R1=(-b+sqrt(D))/(2*a);
	R2=(-b-sqrt(D))/(2*a);
		printf("R1=%.2f and R2=%.2f,",R1,R2);
	printf("roots are real and distinct");
	}   
	else if(D==0)
	{
		R1=R2=-b/(2*a);
		printf("R1=%.2f and R2=%.2f,",R1,R2);
			printf("roots are real and equal");
	}
	else{
		real_part=-b/(2*a);
		imag_part=sqrt(-D);
		R1=real_part+imag_part;
		R2=real_part+imag_part;
			printf("R1=%.2f and R2=%.2f,",R1,R2);
			printf(" roots are imaginary");
	}
	return 0;
}
