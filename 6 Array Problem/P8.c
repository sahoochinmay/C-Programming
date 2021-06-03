// Accept two  3x3 MATRIX and print them using multidimentional array.
#include <stdio.h>
#include <conio.h>
void main()
{
    int mat[2][3][3];
    int i, j, k;
    // accept
    for (i = 0; i < 2; i++)
    {
        printf("Enter %d matrix\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                scanf("%d", &mat[i][j][k]);
            }
        }
    }
    // printf
    for (i = 0; i < 2; i++)
    {
        printf("The %d matrix is \n", i + 1);
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d\t", mat[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}