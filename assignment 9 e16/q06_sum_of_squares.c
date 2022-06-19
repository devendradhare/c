#include <stdio.h>
int squares_sum(int);
int main()
{
    int n, result;
    printf("sum of squares of first N natural numbers\nenter value of N : ");
    scanf("%d", &n);
    result = squares_sum(n);
    printf("the sum is %d ", result);
}
int squares_sum(int a)
{
    int i, re = 0;
    for (i = 1; i <= a; i++)
    {
        re += i*i;
    }
    return re;
}