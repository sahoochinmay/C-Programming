// Write a program in C to show the use of auto variable.
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
  int x = 3, y = 4;
  printf("%d%d",x,y);
  x++;
  y++;
}
