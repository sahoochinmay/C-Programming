//strcmp()
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[15],s2[15];
    int result;
    printf("Enter first string:");
    gets(s1);
    printf("Enter second string:");
    gets(s2);
    result = strcmp(s1,s2);
    if (result == 0)
    {
        printf("Both string are equal.");
    }else{
        printf("String are not equal.");
    }
    printf("%d",result);
}