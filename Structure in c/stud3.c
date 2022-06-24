#include<stdio.h>
struct marks{
int english;
int maths;
int science;
int ssc;
int hindi;
};
struct student{
    int roll;
    char name[20];
    int age;
    struct marks M;
    
};
struct student arr[10];
int main()
{
 int i,n;
 printf("enter the no of student you want\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     printf("enter the Roll no of student %d\n",i+1);
     scanf("%d",&arr[i].roll);
     printf("enter the name of student %d\n",i+1);
     scanf("%s",&arr[i].name);
     fflush(stdin);
      printf("enter the age of student %d\n",i+1);
     scanf("%d",&arr[i].age);
      printf("enter the marks of english of student %d\n",i+1);
     scanf("%d",&arr[i].M.english);
     printf("enter the marks of hindi of student %d\n",i+1);
     scanf("%d",&arr[i].M.hindi);
      printf("enter the marks of maths of student %d\n",i+1);
     scanf("%d",&arr[i].M.maths);
      printf("enter the marks of science of student %d\n",i+1);
     scanf("%d",&arr[i].M.science);
      printf("enter the marks of ssc of student %d\n",i+1);
     scanf("%d",&arr[i].M.ssc);
 }
 printf("details are\n");
 for(i=0;i<n;i++)
 {
     printf("roll no is %d\t",arr[i].roll);
     printf("name is %s\t",arr[i].name);
     printf("age is %d\t",arr[i].age);
     printf("marks of english %d\t",arr[i].M.english);
     printf("marks of hindi %d\t",arr[i].M.hindi);
     printf("marks of maths %d\t",arr[i].M.maths);
     printf("marks of science%d\t",arr[i].M.science);
     printf(" marks of ssc %d\t",arr[i].M.ssc);
     printf("\n");
 }
    return 0;
}


