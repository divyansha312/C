 #include<stdio.h>
int main()
{
	int num,r,fact,i,org,sum=0;
	printf("enter the number you wanna check");
	scanf("%d",&num);
	org=num;
	while(num!=0)
	{
		fact=1;
		r=num%10;
	    num=num/10;
	    for(i=1;i<=r;i++)
	    {
	      fact=fact*i;
		}
		sum=sum+fact;	
	}
	num=org;
	if(sum==num)
	printf("strong number");
	else
	printf("not a strong number");
	return 0;
}
