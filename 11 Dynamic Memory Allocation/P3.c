// Show the use of relloc and free function
#include <stdlib.h>
#include <stdio.h>
#include<conio.h>
#include<process.h>

void main()
{
    int *ptr;
    int n1,n2;
    int i;
    int sum = 0;
    printf("Enter no. of elements: \n");
    scanf("%d",&n1);
    ptr = (int *)calloc(n1,sizeof(int));
    if (ptr == NULL)
    {
        printf("Insufficient memory.\n");
        exit(0);
    }
    printf("Address of old memory\n");
    for ( i = 0; i < n1; i++)
    {
        printf("%u\n",ptr+i);
    }
    printf("Enter new total element size:\n");
    scanf("%d",&n2);
    ptr = (int *)realloc(ptr,n2*sizeof(int));
    printf("Address of new memory\n");
    for ( i = 0; i < n2; i++)
    {
        printf("%u\n",ptr+i);
    }
    free(ptr);
}