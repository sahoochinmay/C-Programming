// P21. Accept a number and calculate it's factorial.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial is %d", fact);
    return 0;
}
