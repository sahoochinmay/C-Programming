// P22. Accept a number and check whether it is armstrong number or not.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter the number=\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
        printf("Armstrong  number ");
    else
        printf("Not armstrong number");
    return 0;
}