// Write a program in C to print the bellow by accepting no. of rows.
//
//    *
//  *   *
//*   *   *
//  *   *
//    *

#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,k;// for top 3 row
    int l,m,n;// for bottom 2 row
    for(i=1; i<= 3; i++)
    {
       for(k=1; k <= 3-i ;k++)
       {
           printf(" ");
       }
       for(j=1; j <=i ; j++)
       {
           printf("*");
           printf(" ");
       }
       printf("\n");
    }
    for(l=2; l >=1 ; l--)
    {
        for(n= 1; n <= 3-l ;n++)
        {
            printf(" ");
        }
        for(m=1; m <= l ;m++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}