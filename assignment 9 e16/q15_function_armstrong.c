#include <stdio.h>
int armstrong(int);
int main()
{
    int num, result;
    printf("enter a number to check armstrong number : ");
    scanf("%d", &num);
    result = armstrong(num);
    if (result == 1)
    {
        printf("%d is armstrong number", num);
    }
    else
    {
        printf("%d is not armstrong number", num);
    }
}
int armstrong(int a)
{
    int i, b, sum = 0;
    i = a;
    while (1)
    {
        b = a % 10;
        sum += b * b * b;
        printf("sum %d \n", sum);
        if (a < 10)
        {
            break;
        }
        a = a / 10;
    }
    if (sum == i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}