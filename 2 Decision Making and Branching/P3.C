// P13. Accept 3 numbers and find the greatest one.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter three number:\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3)
    {
        printf("%d is greatest number.", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%d is greatest number.", n2);
    }
    else
    {
        printf("%d is greatest number.", n3);
    }
    return 0;
}