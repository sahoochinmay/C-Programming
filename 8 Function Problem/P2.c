// Accept radius of circle and calculate it's perimeter by using function.
// With arguement with return

#include <stdio.h>
#include <conio.h>
float perimeter(float); // function declaration

void main()
{
    float r, p;
    // clrscr()
    printf("Enter radius of circle:");
    scanf("%f", &r);
    p = perimeter(r);
    printf("Perimeter of the circle is %f", p);
    // getch();
}
// function definition
float perimeter(float r)
{
    float p;
    p = 2*3.141*r;
    return p;
}
