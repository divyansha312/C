//WAP to arrange the values of an araay in such a way that even numbers precede the odd numbers 
#include<stdio.h>
int main()
{
  int n,i,arr[10],j=0,brr[10],k;
   printf("enter the size of an array\n");
   scanf("%d",&n);
  
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  	scanf("%d",&arr[i]);
  	
  	for(i=0;i<n;i++){
  		if(arr[i]%2==0){
  			brr[j]=arr[i];
  			j++;
		  }
         	}
	  
	  for(i=0;i<n;i++){
	  	if(arr[i]%2!=0){
	  		brr[j]=arr[i];
	  		j++;
		  }
	  }
	  printf(" even elements befor odd are\n");
	  for(i=0;i<n;i++){
	  	printf("%d\n",brr[i]);
	  }
	  return 0;
}
	  
  	
  	
  	

