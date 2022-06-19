#include <stdio.h>
int sum_squares(int n);
int main()
{
    int n, k;
    printf("sum of squares of first n natural numbers\nenter n : ");
    scanf("%d",&n);
    k = sum_squares(n);
    printf("%d", k);
}
int sum_squares(int n)
{
    int s;
    if (n == 1)
    {
        return 1;
    }
    s = n * n + sum_squares(n - 1);
    return s;
}