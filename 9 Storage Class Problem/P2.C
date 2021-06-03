// Write a program in C to show the use of extern.

#include<stdio.h>
#include<conio.h.>
float pie = 3.141;

void func();
void main(){
  printf("%f",pie);
  func();
  getch();
}
void func()
{
  printf("%f",pie);
}