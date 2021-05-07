// P2. Calculate sum of 2 accepted number .
#include <stdio.h>

int main()
{
    int a, b, c = 0;
    printf("Enter two number to calculate sum:\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Sum of %d and %d is %d", a, b, c);
    return 0;
}