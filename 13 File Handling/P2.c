// Write a program to read something in a file.
#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    FILE *fp;
    fp = fopen("Hello.txt", "r");
    printf("Your file content is:\n");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c",ch);
    }
    fclose(fp);
}
