// Accept two number and swap them using call by value funtion.

#include<stdio.h>
#include<conio.h>
void swap(int ,int);//funtion declartion

void main()
{
    int n1,n2;
    printf("Enter two number:\n");
    scanf("%d%d",&n1,&n2);
    printf("Before swap inside main funtion : n1 = %d and n2 = %d\n",n1,n2);
    swap(n1,n2);//funtion call
    // atual parameter
    printf("After swap inside main funtion : n1 = %d and n2 = %d\n",n1,n2);
    
}

//funtion definition
void swap(int x ,int y)// formal parameter
{
    int z;
    z = x;
    x = y;
    y = z;
    printf("After swap inside swap funtion : n1 = %d and n2 = %d\n",x,y);
}