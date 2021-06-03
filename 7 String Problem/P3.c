//strlen()
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[15];
    int len = 0;
    printf("Enter a string:");
    gets(s1);
    len = strlen(s1);
    printf("Length of the string is %d",len);
}
