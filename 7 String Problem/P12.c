//P-2 Accept a string and copy that string to another string without using library function.
#include <stdio.h>
#include <conio.h>
void main()
{
    char s1[15];
    char s2[15];
    int i;
    printf("Enter a string:");
    gets(s1);
    for (i = 0;s1[i] != '\0'; i++)
    {
        s2[i]= s1[i];
    }
    s2[i] = '\0';
    printf("Copied string is %s",s2);
}