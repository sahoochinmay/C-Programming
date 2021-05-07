// P5 . Accept two number and swap them using 3rd variable.P5 . Accept two number and swap them using 3rd variable.
#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2, c;
    printf("Enter two number for swapping:\n");
    scanf("%d%d", &n1, &n2);
    printf("Before swapping the two numbers are %d and %d.\n", n1, n2);
    c = n1;
    n1 = n2;
    n2 = c;
    printf("After swapping the two numbers are %d and %d.", n1, n2);
    return 0;
}