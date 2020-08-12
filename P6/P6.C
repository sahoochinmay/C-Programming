#include <stdio.h>
#include <conio.h>

int main()
{
    float sub1, sub2, sub3, total, per;
    printf("Enter 3 subject marks respectively:\n");
    scanf("%f%f%f", &sub1, &sub2, &sub3);
    total = sub1 + sub2 + sub3;
    per = total / 3;
    printf("Total mark is %f and percentage is %f .", total, per);
    return 0;
}