#include<stdio.h>
struct book input();
void display(struct book);
struct book
{
    int bookid;
    char title[10];
    float price;  
};
struct book input ()
{
    struct book b;
    printf("enter the bookid,title and price of book\n");
    scanf("%d",&b.bookid);
     fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return (b);
}
void display(struct book b)
{
    printf("\n book id is %d ,title of book is %s, and price is %f", b.bookid, b.title, b.price);
}
int main()
{
    struct book b1;
    b1 = input();
    printf("Details of books are\n");
    display(b1);
    return 0;
}
