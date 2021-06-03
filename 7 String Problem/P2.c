//strcat()
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s1[35];
    char s2[15];
    printf("Enter your frist name:");
    scanf("%s",s1);
    printf("Enter your last name:\n");
    scanf("%s",s2);
    strcat(s2,s1);
    printf("%s\n",s1);
    printf("%s",s2);
}
