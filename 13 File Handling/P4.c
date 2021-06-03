// Write a program to copy the content of one file to another file.
#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    FILE *fp1, *fp2;
    fp1 = fopen("source.txt", "r");
    fp2 = fopen("destination.txt", "w");
    while (1)
    {
        ch = fgetc(fp1);
        if (ch == EOF)
            break;
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}