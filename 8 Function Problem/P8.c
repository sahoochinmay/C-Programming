//default arguement in function
#include<stdio.h>
#include<conio.h>
void sum(int x,int y = 10);

void main()
{
    int x = 5;
    sum(x);
}
void sum(int x,int y)
{
    printf("Sum = %d",x+y);
}