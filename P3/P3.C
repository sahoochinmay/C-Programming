#include <stdio.h>
#include <conio.h>

// P3 . Accept the length and breadth  and calculate the area of the rectangle .
int main()
{
    float l, b, a = 0;
    printf("Enter lenght of the rectangle:\n");
    scanf("%f", &l);
    printf("Enter breadth of the rectangle:\n");
    scanf("%f", &b);
    a = l * b;
    printf("Area of the rectangel is %f", a);
    return 0;
}