// strcpy()
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[15],s2[15];
    printf("Enter a string:");
    gets(s1);
    strcpy(s2,s1);
    printf("Final string is %s",s2);
}