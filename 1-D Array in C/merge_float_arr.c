//WAP to read two floating point arrays merge these arrays and display the resultant array
#include<stdio.h>
int main()
{
  int n1,n2,n3,i,k;
  float arr[10],brr[10],crr[20];
   printf("enter the size of an array1\n");
   scanf("%d",&n1);
  
  printf("enter the elements of array1\n");
  for(i=0;i<n1;i++)
        {
  scanf("%f",&arr[i]);
  	crr[i]=arr[i];
         }
         k=i;
         
  	printf("enter the size of an array2\n");
   scanf("%d",&n2);
   
    printf("enter the elements of array2\n");
  for(i=0;i<n2;i++)
     {
  	scanf("%f",&brr[i]);
  	crr[k]=brr[i];
  	k++;
     }
	 n3=n1+n2;	
  	printf("elements after merging the array are\n");
  	for(i=0;i<n3;i++)
  	
  	printf("%.2f\n",crr[i]);

  	return 0;
  }
