//WAP to input an array and sort the array in descending order
#include<stdio.h>
void des(int*);
int main()
{
	int arr[]={3,7,6,4,1};
   des(arr);
	return 0;
}
void des(int* a)
{
	int i,max,temp,j;

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}

