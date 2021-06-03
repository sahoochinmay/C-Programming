//strupr()
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[15];
    printf("Enter a string:");
    gets(s1);
    strupr(s1);
    puts(s1);
}