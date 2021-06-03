// Show the use of malloc and free function
#include <stdlib.h>
#include <stdio.h>
#include<conio.h>
#include<process.h>

void main()
{
    int *ptr;
    int n;
    int i;
    int sum = 0;
    printf("Enter no. of elements: \n");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    if (ptr == NULL)
    {
        printf("Insufficient memory.\n");
        exit(0);
    }
    printf("Enter elements:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
        sum = sum + *(ptr+i);
    }
    printf("Sum = %d",sum);
    free(ptr);
}
