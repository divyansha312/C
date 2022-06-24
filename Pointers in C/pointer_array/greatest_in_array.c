//WAP to find the gretest element of the array
#include<stdio.h>
void max(int*,int);
int main()
{
  int arr[30],n,i;
  printf("enter the length of array\n");
  scanf("%d",&n);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&arr[i]);
  }
  printf("elements are\n");
   for(i=0;i<n;i++)
  {
  	printf("%d\n",arr[i]);
  }
  max(arr,n);
	return 0;
}
void max(int *a,int n)
{
	int i,lar;
	lar=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>lar)
		{
			lar=a[i];
		}
	}
	printf("greatest element int the array is %d\n",lar);
}
