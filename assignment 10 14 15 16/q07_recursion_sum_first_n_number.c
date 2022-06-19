#include <stdio.h>
int sum_n_numbers(int n);
int main()
{
    int s,k;
    printf("sum of first n natural number\nenter n : ");
    scanf("%d", &s);
    k = sum_n_numbers(s);
    printf("%d ",k );
}
int sum_n_numbers(int n)
{
    int s;
    if (n == 0)
    {
        return 0;
    }
    s = n + sum_n_numbers(n - 1);
    return s;
}