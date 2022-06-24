//WAP to calculate force of attraction on a body of mass m exerted by earth

#include<stdio.h>
float force(float mass);
float force(float mass)
{
	float f;
	f= mass*9.8;
	return f;
	
}

int main()
{ 
float mass,F;
	printf("Enter the mass of the body\n");
	scanf("%f", &mass);
    F = force(mass);
	printf("Force exerted by body of mass %.2f is %.2f\n",mass,F);
	return 0;
}
