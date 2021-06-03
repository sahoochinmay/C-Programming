//Function Returning Pointer
#include<stdio.h>
int *return_pointer(int *, int); // this function returns a pointer of type int

void main()
{
    int i, *ptr;
    int arr[] = {11, 22, 33, 44, 55, 66};
    i = 4;

    printf("Address of arr = %u\n", arr);

    ptr = return_pointer(arr, i);

    printf("\nAfter incrementing arr by 4 \n\n");

    printf("Address of ptr = %u\n\n" , ptr);//6422204
    printf("Value at %u is %d\n", ptr, *ptr);

}
// x++ = x + 4
int *return_pointer(int *p, int n)
{
    p = p + n;// 6422196 + 4 = 6422204
    return p;
}