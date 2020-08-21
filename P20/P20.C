// P20. Accept a 3 digit number and revers it.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, rev = 0, digt;
    printf("Enter a number:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        digt = num % 10;
        rev = rev * 10 + digt;
        num = num / 10;
    }
    printf("Reverse number is %d", rev);
    return 0;
}