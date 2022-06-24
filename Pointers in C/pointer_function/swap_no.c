//WAP to swap two numbers
#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a=6,b=8;
	printf("before: a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nafter: a=%d,b=%d",a,b);
    return 0;	
}
 void swap(int *p,int* n)
 {
 	int temp;
    temp=*p;
    *p=*n;
    *n=temp;
 }

