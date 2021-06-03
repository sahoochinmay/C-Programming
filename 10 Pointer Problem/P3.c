// Show the use of pointer arithematic
#include<stdio.h>
#include<conio.h>
void main()
{
    int *ptr, p = 3;
    ptr = &p;
    printf("%u",ptr);
    ptr++;
    printf("%u",ptr);
    ptr--;
    printf("%u",ptr);
    ptr = ptr + 2;
    printf("%u",ptr);
    ptr = ptr - 2;
    printf("%u",ptr);
}