// Accept two number and if number one is greater than second then print diff otherwise sum.
// with arguement  with return

#include <stdio.h>
#include <conio.h>
int diff(int, int); // functon declaration
int sum(int ,int);

void main()
{
    int n1, n2;
    int r;
    printf("Enter two number:\n");
    scanf("%d%d",&n1,&n2);
    if (n1 > n2)
    {
        r = diff(n1,n2);
        printf("Difference is %d",r);
    }else{
        r = sum(n1,n2);
        printf("Sum is %d",r);
    }

    //getch();
}
// function definiton
int diff(int p, int q)
{
    return p-q;
}
int sum(int p,int q)
{
    return p + q;
}
