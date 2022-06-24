#include<stdio.h>
struct student{
    int roll;
    char name[20];
    int age;
};
struct student arr[10];
int main()
{
 int i,n;
 printf("enter the no of student you want\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     printf("enter the Roll no,Name,Age of student %d\n",i+1);
     scanf("%d",&arr[i].roll);
     scanf("%s",&arr[i].name);
     fflush(stdin);
     scanf("%d",&arr[i].age);
 }
 printf("details from roll no 2 are\n");
 for(i=1;i<n;i++)
 {
     printf("%d\t",arr[i].roll);
     printf("%s\t",arr[i].name);
     printf("%d\t",arr[i].age);
     printf("\n");
 }
    return 0;
}


