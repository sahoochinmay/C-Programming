// P3 . Accept the length and breadth  and calculate the area of the rectangle .
#include <stdio.h>
#include <conio.h>
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