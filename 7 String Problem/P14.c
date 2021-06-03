//Accept a string and check whether it is palindrome or not.
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char str[15];
    char revstr[15];
    int i;
    int len = 0;
    printf("Enter a string:");
    gets(str);
    len = strlen(str)-1;
    i =0;
    while (len >= 0)
    {
        revstr[i] = str[len];
        len--;
        i++;
    }
    revstr[i] = '\0';
    printf("Reverse String is %s\n",revstr);
    // check palindrom
    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != revstr[i])
        {
            printf("It is not palindrome .");
            exit(0);
        }
        
    }
    printf("It is palindrome.");
    // getch()
}