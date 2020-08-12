#include <stdio.h>
#include <conio.h>

int main()
{
    float r, A, P;
    printf("Enter radius of the circle:\n");
    scanf("%f", &r);
    A = 3.141 * r * r;
    P = 2 * 3.141 * r;
    printf("Area of the circle is %f and perimeter is %f", A, P);
    return 0;
}