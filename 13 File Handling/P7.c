// Write a program in C to show the use of string  input or output

#include <stdio.h>
#include <conio.h>
void main()
{
   FILE *fp;
   char str[80];
   fp = fopen("test.txt","w");
   printf("Enter your text:\n");
   gets(str);
   fputs(str,fp);
   fclose(fp);
   fp = fopen("test.txt","r");
   fgets(str,80,fp);
   puts(str);
   fclose(fp);
}