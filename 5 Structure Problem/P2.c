// Write a program in C to print the bellow by accepting no. of rows.
// 1
// 2    2
// 3    3   3
// 4    4   4   4
// 5    5   5   5   5
// 6    6   6   6   6   6 

#include <stdio.h>
#include <conio.h>
void main()
{
    int row;
    int i;
    int j;
    printf("Enter no. of rows:");
    scanf("%d",&row);
    for(i=1; i<= row; i++)
    {
        for(j=1; j<= i;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}