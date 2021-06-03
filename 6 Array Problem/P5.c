// Accept  a 3X3 matrix and print it's upper triangular and lower triangular matrix


#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[3][3];
    int i;
    int j;
    int mat2[3][3];
    //accept matrix
    for(i = 0 ; i < 3; i++)
    {
        printf("Enter %d row:\n",i+1);
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    // make a copy for um
    for(i = 0; i < 3 ;i++)//1
    {
        for(j=0 ; j < 3 ; j++)//1
        {
           mat2[i][j] = mat1[i][j];
        }
    }
    //  convet to uppertriangular matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0 ; j< 3 ; j++)
        {
            if (i > j)
            {
                mat1[i][j] = 0;
            }
            
        }
    }
    //    convert to lowertriangular matrix
    for(i = 0; i < 3; i++)
    {
        for(j = 0 ; j< 3 ; j++)
        {
            if (i < j)
            {
                mat2[i][j] = 0;
            }
            
        }
    }
    // print uppertriangular matrix
    printf("Uppertriangular matrix is :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0 ; j< 3 ; j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    // print lowertriangular matrix
    printf("lowertriangular matrix is :\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0 ; j< 3 ; j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
}