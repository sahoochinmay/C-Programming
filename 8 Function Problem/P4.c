// Accept a number and calculate it's factorial 
// using recursion.
// with arguement  with return
// 5! = 5 * 4!
//

#include <stdio.h>
#include <conio.h>
long int fact(int); // function declartion

void main()
{
    int num;
    long int f;
    printf("Enter a number:");
    scanf("%d", &num);
    f = fact(num); // function call
    printf("Factorial of %d is %d", num, f);
    //getch();
}
// funciton definiton
long int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);//  return 5 * 24
    }
}
// Unwinding Phase
// n = 0
//  return 5 * fact(4)
//             return 4 * fact(3)
//                        return 3 * fact(2)
//                                    return 2 * fact(1)
//                                                return 1 * fact(0)
//                                                            return 1;

// Winding Phase
//  return 5 * 24