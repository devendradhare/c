#include <stdio.h>
int all_armstrong(int,int);
int main()
{
    int a, b;
    printf("all armstrong numbers between a and b\nenter value of a and b :");
    scanf("%d%d", &a, &b);
    all_armstrong(a, b);
    getch();
}
int all_armstrong(int x, int y)
{
    int i, sum = 0, a, b;
    for (i = x; i <= y; i++)
    {
        sum = 0;
        b = i;
        while (1)
        {
            a = b % 10;
            sum += a * a * a;
            if (b < 10)
            {
                break;
            }
            b /= 10;
        }
        if (sum==i)
        {
            printf("%d ",i);
        }
    }
}