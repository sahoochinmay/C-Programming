// Write a program in C to print the bellow by accepting no. of rows.

// 1    2   3   4   5   6 
// 1    2   3   4   5
// 1    2   3   4
// 1    2   3
// 1    2
// 1

#include <stdio.h>
#include <conio.h>
void main()
{
    int row;
    int i;
    int j;
    printf("Enter no. of rows:");
    scanf("%d",&row);
    for(i=row; i >= 1; i--)
    {
        for(j=1; j <= i;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}