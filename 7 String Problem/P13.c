//Accept a string and print the reverse string.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[15];
    char revstr[15];
    int i;
    int len = 0;
    printf("Enter a string:");
    gets(str);//4
    len = strlen(str)-1;//3
    i =0;
    while (len >= 0)
    {
        revstr[i] = str[len];
        len--;
        i++;
    }
    revstr[i] = '\0';
    printf("Reverse String is %s",revstr);
    // getch()
}