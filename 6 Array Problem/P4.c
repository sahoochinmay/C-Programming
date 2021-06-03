// Accept  a 3X3 matrix and find out diagonal sum of matrix.

#include <stdio.h>
#include <conio.h>
void main()
{
    int mat[3][3];
    int i;
    int j;
    int ld = 0;
    int rd = 0;
    printf("Enter a 3X3 matrix row wise :\n");
    //accept matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    // sum for left diagonal
    for (i = 0; i < 3; i++) //1
    {
        for (j = 0; j < 3; j++) //1
        {
            if (i == j)
            {
                ld = ld + mat[i][j];
            }
        }
    }
    // sum for right diagonal
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                rd = rd + mat[i][j];
            }
        }
    }
    printf("Left and right diagonal sum are %d %d", ld, rd);
}