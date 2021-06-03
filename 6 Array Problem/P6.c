// Accept two  2x2 MATRIX and multiply them.

#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[2][2], mat2[2][2];
    int i, j;
    int mul[2][2];
    int k;
    printf("Enter first matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter second matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    // calculate multiplication
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                mul[i][j] = mul[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }
    // print mul matrix
    printf("Mul of two matrix is \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}