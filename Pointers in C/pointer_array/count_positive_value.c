//WAP to count the positive elements in array

 #include<stdio.h>

 void fun(int arr[],int n);
 void fun(int arr[],int n)
 {
 	int i,count=0;
 	printf("Enter the values\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	
	printf(" Positive Elements are\n");
	
 	for(i=0;i<n;i++)
 	{
 		if(arr[i]>=0)
 		{
 		printf("%d\n",arr[i]);
	    count++;
	    }
	
   }
   printf("Total positive elements are %d\n",count);
}

 int main()
 {
 int arr[6];
 fun(arr,6);
 return 0;
 }
