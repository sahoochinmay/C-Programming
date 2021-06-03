// Write a program in C to show the use of static.
#include<stdio.h>
#include<conio.h>
void func();
void main()
{
  func();
  func();
  func();
  getch();
}
void func()
{
  static int x = 3, y = 4;
 printf("%d%d",x,y);
  x++;
 y++;
}