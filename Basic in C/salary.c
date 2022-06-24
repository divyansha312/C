#include<stdio.h>
int main()
{
	float sal, gross_sal,DA,HRA;
	printf("enter the salary of an employee:\n");
	scanf("%f",&sal);
	if(sal<=10000)
	{	
	HRA=(sal*20)/100;
	DA=(sal*80)/100;
	}
	else if(sal<=20000)
	{
		HRA=(sal*25)/100;
		DA=(sal*90)/100;
	}
	else
	{
		HRA=(sal*30)/100;
		DA=(sal*95)/100;
	}
	gross_sal=sal+HRA+DA;
	printf("gross salary of employee is %.2f\n",gross_sal);
	return 0;
}
