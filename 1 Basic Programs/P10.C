// P10. Accept a number and print the reminder after dividing with 3.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, rem;
    printf("Enter a number for dividing with 3:\n");
    scanf("%d", &num);
    rem = num % 3;
    printf("The reminder is %d", rem);
    return 0;
}