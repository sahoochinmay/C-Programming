// Show the use of pointer to pointer
#include<stdio.h>
#include<conio.h>
void main()
{
    int *p , **ptr, m = 3;
    p = &m;
    ptr = &p;
    printf("%d",m);
    printf("%d",&m);
    printf("%u",p);
    printf("%u",&p);
    printf("%u",*p);
    printf("%u",ptr);
    printf("%d",*(&ptr));
    printf("%d",**ptr);
    printf("%u",&ptr);
}