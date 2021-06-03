// Accept a number and check whether it is perfect or not.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i = 1,sum = 0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while (i<n)
    {
        sum = sum + i;
        i++;
    }
    if (sum = n)
    {
        printf("It is a perfect number.\n");   
    }else{
        printf("It is not a perfect number.\n");
    }
}