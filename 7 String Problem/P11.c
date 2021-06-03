//Accept a string and find out it's length without using library function.
#include <stdio.h>
#include <conio.h>
void main()
{
    char str[15];
    int len = 0;
    int i;
    printf("Enter a string:");
    gets(str);
    for ( i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("String length is %d",len);
}