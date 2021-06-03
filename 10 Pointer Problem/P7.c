//Pointer to function
#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
    int n1=5,n2=5;
    int result1 = 0;
    int result2 = 0;
    int (*fptr)(int ,int);
    fptr = add;
    // direct call
    result1 = add(n1,n2);
    printf("Result by direct call= %d\n",result1);
    // call by pointer
    result2 = (*fptr)(n1,n2);
    printf("Result through pointer call= %d",result2);
}

int add(int x, int y)
{
    return x+y;
}