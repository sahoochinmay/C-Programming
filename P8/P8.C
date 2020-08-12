#include <stdio.h>
#include <conio.h>

int main()
{
    int R, P;
    printf("Enter amount in rupees:\n");
    scanf("%d", &R);
    P = R * 100;
    printf("Amount in paisa is %d", P);
    return 0;
}