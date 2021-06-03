// Accept  a 3X3 matrix and display that.

#include <stdio.h>
#include <conio.h>
void main()
{
    int mat[3][3];
    int i;
    int j;
    printf("Enter a 3X3 matrix row wise:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Th matrix is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}