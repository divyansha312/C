//WAP to input an array and find the second largest element of the array
#include<stdio.h>
#include<limits.h>
void second(int*);

int main()
{
	int arr[]={55,71,89,91,37,99};
	second(arr);
	return 0;
}
void second(int* a)
{
	int i,l,s;
	l=s=INT_MIN;
	for(i=0;i<6;i++)
	{
		if(a[i]>l)
		{
			s=l;
			l=a[i];
		}
		else if(a[i]>s&&a[i]<l)
		{
			s=a[i];
		}
		
	}
	printf("%d is the second largest value\n",s);
}
