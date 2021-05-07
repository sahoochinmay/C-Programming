// P9. Accept temperature in celsius and convert into  fahrenheit.
#include <stdio.h>
#include <conio.h>

int main()
{
    float C, F;
    printf("Enter temperature in celsius :\n");
    scanf("%f", &C);
    F = (1.8 * C) + 32;
    printf("Temperature in Fahrenheit is %f", F);
    return 0;
}