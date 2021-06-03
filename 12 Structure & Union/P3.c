// Define  a structure student having name,roll and percentage . Accept and display the details of 20 student.
#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    float per;
    char name[30];
};

void main()
{
    struct student S[20];
    int i;
    printf("Enter details of 20 student:\n");
    for ( i = 0; i < 20; i++)
    {
        printf("Enter roll & per:\n");
        scanf("%d%f",&S[i].roll,&S[i].per);
        printf("Enter name:\n");
        fflush(stdin);
        gets(S[i].name);
    }
    printf("The details of 20 student:\n");
    for ( i = 0; i < 20; i++)
    {
        printf("%d\t%f\t%s\n",S[i].roll,S[i].per,S[i].name);
    }
}