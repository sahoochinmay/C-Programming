// Compute the factor of a given number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d",i);
        }
    }
}