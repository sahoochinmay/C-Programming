// P17. Accept two number and depending on users choice do arithmetic calculation.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2, choice, result = 0;
    printf("Enter two number:\n");
    scanf("%d%d", &n1, &n2);
    printf("Enter your choice:\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division(/)\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = n1 + n2;
        break;
    case 2:
        result = n1 - n2;
        break;
    case 3:
        result = n1 * n2;
        break;
    case 4:
        result = n1 / n2;
        break;
    default:
        printf("Invalid Input\n");
        break;
    }
    printf("%d", result);
    return 0;
}