// P15. Accept 5 subject mark and calculate percentage and show which division he/she get-
// >60%  First Division
// >50%  Second Division
// >30% Third Division
// <30% Fail

#include <stdio.h>
#include <conio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5, total, percent;
    printf("Enter 5 subject marks:\n");
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percent = total / 5;
    printf("Total mark: %.2f \n", total);
    printf("%.2f percentage \n", percent); //Here .2f for upto 2 decimal place
    if (percent >= 60)
    {
        printf("First Division.");
    }
    else if (percent >= 50)
    {
        printf("Second Division.");
    }
    else if (percent >= 30)
    {
        printf("Third Division");
    }
    else
    {
        printf("Fail.");
    }

    return 0;
}