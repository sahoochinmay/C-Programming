// Accept  a 2X2 matrix and transpose that.

#include <stdio.h>
#include <conio.h>
void main()
{
    int mat[2][2];
    int trans[2][2];
    int i;
    int j;
    printf("Enter a 3X3 matrix row wise:\n");
    // accept a 2X2 matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    // tanspose a 2X2 matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
    // print the transpose matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    // getch();
}