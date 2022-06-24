 #include<stdio.h>
int main()
{
	int n,num=1,r,fact,i,org,sum=0;
	printf("enter the number till want strong number");
	scanf("%d",&n);
	printf("strong number till %d are\n",n);
	while(num<=n)
	{
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
	printf("%d\n",num);
	num++;
	sum=0;
}
	return 0;
}
