// P18. Accept n and calculate sum of natural number from 1 to n.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Sum of all natural number upto %d is %d ", num, sum);
    return 0;
}