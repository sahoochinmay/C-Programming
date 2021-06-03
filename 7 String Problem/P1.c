// Accept your name and display that.
#include<stdio.h>
#include<conio.h>
void main()
{
    char name[30];
    printf("Enter your name:\n");
    // scanf("%s",name);//for no space input
    // or
     gets(name);// with space input
     printf("Your Name is %s",name);
}