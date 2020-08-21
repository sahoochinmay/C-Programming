// P23. Accept a 3 digit number and check whether palindrom or not.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, main, rev = 0, digt;
    printf("Enter a number:\n");
    scanf("%d", &num);
    main = num;
    while (num != 0)
    {
        digt = num % 10;
        rev = rev * 10 + digt;
        num = num / 10;
    }
    printf("Reverse number is %d\n", rev);
    if (main == rev)
    {
        printf("So it is a palindrom number.");
    }
    else
    {
        printf("So it is not a palindrom number.");
    }
    return 0;
}