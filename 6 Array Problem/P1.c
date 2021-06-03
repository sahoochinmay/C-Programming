// Accept 10 no's in array and calculate their sum.

#include <stdio.h>
#include <conio.h>
void main()
{
    int num[10];
    int i;
    int sum = 0;
    printf("Enter 10 number: \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("SUm of 10 number is %d", sum);
}