//Define a structure student ,accept and display the details of one student
#include <stdio.h>
#include <conio.h>
struct Student
{
    int roll;
    char name[20];
    struct birthday
    {
        int day;
        int month;
        int year;
    }dob;
    
};

void main()
{
    struct Student S;
    printf("Enter details of student:\n");
    printf("Enter roll:");
    scanf("%d",&S.roll);
    printf("Enter name:");
    fflush(stdin);
    scanf("%s",S.name);
    printf("Enter birth date:\n");
    scanf("%d%d%d",&S.dob.day,&S.dob.month,&S.dob.year);
    printf("\tStudent Details\n---------------------------\n");
    printf("Roll No: %d\n",S.roll);
    printf("Name:%s\n",S.name);
    printf("DOB:%d/%d/%d\n",S.dob.day,S.dob.month,S.dob.year);
}