// Write a program to write something in a file.
#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    FILE *fp;
    fp = fopen("Hello.txt", "w");
    printf("Write something and press ctrl+Z\n");
    while (1)
    {
        ch = getchar();
        if (ch == EOF)
            break;
        fputc(ch, fp);
    }
    fclose(fp);
}