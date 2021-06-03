// formated i/o in file
// output 
#include <stdio.h>
#include <conio.h>
void main()
{
   FILE *fp;
   int age;
   char name[30];
   fp = fopen("test.txt","r");
   fscanf(fp,"Name: %s \nAge: %d",name,&age);
   printf("Your name is %s and age %d",name,age);
   fclose(fp);
}