// program to check whether a given number is positive or non-positive
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("\ncheck number is positive or non-positive\nenter a number : ");
    scanf("%d",&a);
    if (a < 1)
    {
        printf("\n%d is a non-positive number", a);
    }
    else
    {
        printf("\n%d is a positive number", a);
    }
    getch();
}