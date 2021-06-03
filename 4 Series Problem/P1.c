// Compute the sum of n terms of the series
// S = 1 - 2 + 3 - 4 + 5 - 6 + ....n
#include<stdio.h>
#include<conio.h>
void main()
{
    int num , i;
    float s=0;
    printf("Enter the nth term:\n");
    scanf("%d",&num);
    for ( i = 1; i < num; i++)
    {
        if (i % 2 == 0)
        {
            s = s - i;
        }
        else{
            s = s+i;
        }
    }
    printf("The value  is %f \n",s);
}