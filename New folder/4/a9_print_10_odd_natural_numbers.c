// this program is print first 10 odd natural numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    printf("\nfirst 10 odd natural numbers");
    for (i = 1; i <= 10; i++)
    {
        printf("\n%d", i + i - 1);
    }
    getch();
}