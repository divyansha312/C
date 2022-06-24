#include<stdio.h>
struct Student{
char name[20];
int id;
char dept[20];
char course[20];
};
struct Student arr[30];
int main()
{
    int n,i;
    printf("enter the length of array you want");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("enter student%d name,id,dept,couse\n",i+1);
        // scanf("%s %d %s %s",&arr[i].name,&arr[i].id,&arr[i].dept,&arr[i].course);
        scanf("%s",&arr[i].name);
        fflush(stdin);
         scanf("%d",&arr[i].id);
        fflush(stdin);
         scanf("%s",&arr[i].dept);
        fflush(stdin);
         scanf("%s",&arr[i].course);
        fflush(stdin);
    }
    printf("data are\n");
    for(i=0;i<n;i++)
    {
        printf(" name %s id %d dept %s course %s \n",arr[i].name,arr[i].id,arr[i].dept,arr[i].course);
    }


    return 0;
}
