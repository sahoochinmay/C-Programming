// Access a variable using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    int p = 5,* ptr;
    ptr = &p;
    printf("%d",p);
    printf("%u",&p);
    printf("%u",ptr);
    printf("%d",*ptr);
    printf("%u",*ptr);
}