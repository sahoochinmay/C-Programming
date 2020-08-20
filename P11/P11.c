#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i = 0, rem;
    printf("Enter a number:\n");
    scanf("%d", &num);
    rem = num % 2;
    if (rem == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}