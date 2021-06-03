// strrev()
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[15];
    printf("Enter a string:");
    gets(s1);
    strrev(s1);
    printf("Reverse string is %s\n",s1);
}