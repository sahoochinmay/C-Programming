// Accept no. of row and print bellow structure
// *
// *    *
// *    *   *
// *    *   *   *
// *    *   *   *   *
// *    *   *   *   *   * 

#include <stdio.h>
#include <conio.h>
int main()
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
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}