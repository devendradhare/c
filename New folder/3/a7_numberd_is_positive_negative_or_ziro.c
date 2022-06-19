// this program is check whether a given number is positive negative or zero
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("\ncheck number is positive negative or ziro\nenter a number : ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("\n%d is a nagetive number", a);
    }
    else if (a > 0)
    {
        printf("\n%d is a positive number", a);
    }
    else
    {
        printf("\n%d ziro", a);
    }
}