// Write a program to write something in a file and then read the content.
#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    FILE *fp;
    fp = fopen("MYFile.txt","w");
    printf("Write something to your file and press ctrl+z :\n");
    while (1)
    {
        ch = getchar();
        if (ch == EOF)
           break;
        fputc(ch,fp);
    }
    fclose(fp);
    fp = fopen("MYFile.txt","r");
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