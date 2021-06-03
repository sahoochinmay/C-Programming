// Write a program in C to show the use of register.

#include<stdio.h>
#include<conio.h>
void main()
{
  register int i;
  for( i = 0; i < 20000 ; i ++)
   {
      printf("%d",i);
   }
   getch();
}