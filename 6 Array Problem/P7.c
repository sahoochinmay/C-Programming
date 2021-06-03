// Accept two  3x3 MATRIX and find out their equality.
#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[3][3], mat2[3][3];
    int i, j;
    int r = 1;
    printf("Enter first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    // check equality
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (mat1[i][j] != mat2[i][j])
            {
                r = 0;
                break;
            }
        }
    }
    if (r == 1)
    {
        printf("Matrix are equal");
    }
    else
    {
        printf("Matrix are not equal");
    }
}