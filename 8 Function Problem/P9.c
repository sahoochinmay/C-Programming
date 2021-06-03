//pass an array to a function
#include <stdio.h>
#include <conio.h>
void printArr(int arr[]);

void main()
{
    int x = 5;
    int y = 10;
    int arr[] = {1, 2, 3};
    printArr(arr);
}

void printArr(int arr[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", arr[i]);
    }
}