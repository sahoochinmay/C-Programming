// Print all the prime numbers between 1 to 500
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, number = 1, count;
    clrscr();
    printf("\nPrime number from 1 to 500 are :\n");
    while (number <= 500)
    {
        count = 0;
        i = 2;
        while (i <= number / 2)
        {
            if (number % i == 0)
            {
                count++;
                break;
            }
            i++;
        }
        if (count == 0 && number != 1)
        {
            printf("%d\t", number);
        }
        number++;
    }
}