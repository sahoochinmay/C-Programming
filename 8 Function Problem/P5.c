// Print fibonaci series upto nth term
// using recursion.
//  0 1 1 2 3 5 8 13 21 ... n
//
//Output : 0 1 1 2 3
#include <stdio.h>
#include <conio.h>
int fib(int); // function declartion

void main()
{
    int i, n;
    printf("Enter no. of terms:");
    scanf("%d", &n);//5
    for (i = 0; i < n; i++)// i = 5
    {
        printf("%d\t", fib(i));
    }
    //getch();
}
// funciton definiton
int fib(int x)// x = 4
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return (fib(x - 1) + fib(x - 2));// retrun 2 +  1 
    }
}