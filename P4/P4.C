// P4 . Accept principal value, rate of interest , time. Calculate simple interest.
#include <stdio.h>
#include <conio.h>

int main()
{
    float P, R, T, SI;
    printf("Enter the principal value:\n");
    scanf("%f", &P);
    printf("Enter rate of interest:\n");
    scanf("%f", &R);
    printf("Enter time in Year:\n");
    scanf("%f", &T);
    SI = (P * T * R) / 100;
    printf("Simple Interest is %f", SI);
    return 0;
}