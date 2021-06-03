// Define a structure book ,accept and display the details of two books
#include <stdio.h>
#include <conio.h>
struct Book
{
    int bno;
    char bname[20];
    float bpirce;
};

void main()
{
    struct Book b1, b2;
    printf("Enter details of first book:\n");
    scanf("%d%s%f", &b1.bno, b1.bname, &b1.bpirce);
    printf("Enter details of second book:\n");
    scanf("%d%s%f", &b2.bno, b2.bname, &b2.bpirce);
    printf("The details of 1st book is:\n");
    printf("Book NO:%d \nBook Name:%s\nBook Price:%f\n", b1.bno, b1.bname, b1.bpirce);
    printf("The details of second book is:\n");
    printf("Book NO:%d \nBook Name:%s\nBook Price:%f\n", b2.bno, b2.bname, b2.bpirce);
}