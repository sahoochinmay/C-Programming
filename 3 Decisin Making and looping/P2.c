// P19. Accept a number and check whether prime or not.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, counter = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            counter++;
        }
    }
    if (counter == 2)
    {
        printf("\nIt is prime.");
    }
    else
    {
        printf("It is composite.");
    }
    return 0;
}