// strncpy()
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[15],s2[15];
    int n = 4;
    printf("Enter a string:");
    gets(s1);
    strncpy(s2,s1,n);
    puts(s2);
}