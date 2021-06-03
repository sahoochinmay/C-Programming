// Accept two no's and calculate sum by using funciton.
///////////////////////////////////////////////////////////////////
////////////////////////i. no arguement no return//////////////////
//////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <conio.h>
void sum(); // function declaration

void main()
{
    sum();// function call
    // getch();
}
// function definition
void sum()
{
    int n1,n2;
    int s = 0;
    printf("Enter two number:\n");
    scanf("%d%d",&n1,&n2);
    s = n1 + n2;
    printf("Sum = %d\n",s);
}
////////////////////////////////////////////////////////////////////
////////////////////ii. no arguement with return///////////////////
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <conio.h>
int sum(); // function declaration

void main()
{
    int s=0;
    s = sum();// function call
    printf("Sum = %d\n",s);
    // getch();
}
// function definition
int sum()
{
    int n1,n2;
    int s = 0;
    printf("Enter two number:\n");
    scanf("%d%d",&n1,&n2);
    s = n1 + n2;
    return s;
}
////////////////////////////////////////////////////////////////
////////////////iii. with arguement no return/////////////////////
/////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <conio.h>
void sum(int, int); // function declaration

void main()
{
    int n1, n2;
    int s = 0;
    printf("Enter two number:\n");
    scanf("%d%d", &n1, &n2);
    sum(n1, n2); // function call
}
// function definition
void sum(int n1, int n2)
{
    int s = 0;
    s = n1 + n2;
    printf("Sum = %d\n", s);
}
////////////////////////////////////////////////////////////////////
////////////////iv. With arguement with return/////////////////////
////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <conio.h>
int sum(int, int); // function declaration

void main()
{
    int n1, n2;
    int s = 0;
    printf("Enter two number:\n");
    scanf("%d%d", &n1, &n2);
    s = sum(n1, n2); // function call
    printf("Sum = %d\n", s);
    // getch();
}
// function definition
int sum(int n1, int n2)
{
    int s = 0;
    s = n1 + n2;
    return s;
}