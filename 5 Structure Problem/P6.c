// Write a program in C to print the bellow by accepting no. of rows.

//   *
//  *  *
//*   *   *

#include <stdio.h>
#include <conio.h>
void main()
{
    int row;
    int i;// for no of rows
    int j;
    int k;// for space
    printf("Enter no. of rows:");
    scanf("%d",&row);//4
    for(i=1; i<= row; i++)// i= 2
    {
       for(k=1; k <= row-i ;k++)//2
       {
           printf(" ");
       }
       for(j=1; j <=i ; j++)//1
       {
           printf("*");
           printf(" ");
       }
       printf("\n");
    }
}

