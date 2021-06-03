//strstr()
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[15], s2[15];
    printf("Enter a string:");
    gets(s1);
    printf("Enter another string:");
    gets(s2);
    if (strstr(s1, s2) == NULL)
    {
        printf("Substring not present");
    }
    else
    {
        printf("Substring present.");
    }
}