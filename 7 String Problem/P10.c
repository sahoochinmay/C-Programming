// strlwr()
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[15];
    printf("Enter a string:");
    gets(s1);
    strlwr(s1);
    puts(s1);
}