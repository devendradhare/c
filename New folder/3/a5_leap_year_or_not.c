// this program is check whether an year is a leap year or not
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    for (;;)
    {
    printf("\n\ncheck the year is leap year or not\nenter an year : ");
    scanf("%d", &a);
        if (a % 4 == 0)
        {
            if (a % 25)
                printf("\n%d is a leap year ",a);
            else
                printf("\n%d is not a leap year",a);
        }
        else
        {
            printf("\n%d is not a leap year",a);
        }
    }
}