#include<stdio.h>
struct address{
    char city[10];
    int phone_no;
    int pin;
};
struct employee
{
    char name[20];
    struct address A;
    
};
int main()
{
    struct employee emp={"Divya","Bijnor",90847,246701};
    printf("name %s,city %s,phone num %d,pin %d",emp.name,emp.A.city,emp.A.phone_no,emp.A.pin);
    return 0;
}

