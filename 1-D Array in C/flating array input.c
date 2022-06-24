//WAP to input a floating point aarays and print the array elements
#include<stdio.h>
int main()
{
int i,n;
float arr[n];
printf("enter the size of an array\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
	scanf("%f",&arr[i]);
	printf("elements are\n");
	for(i=0;i<n;i++)
	printf("%.2f\n",arr[i]);
return 0;
}
