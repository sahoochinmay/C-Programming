// Show the use of array of pointer
#include <stdio.h>
#include <conio.h>
void main()
{
    int *p[10], i;
    int a[10];
    printf("Enter elements of array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        p[i] = &a[i];
    }
    printf("The value are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d", *p[i]);
    }
}