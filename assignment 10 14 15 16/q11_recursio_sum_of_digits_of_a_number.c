#include <stdio.h>
int main()
{
    int n, k;
    printf("sum of digits of n\nenter value of n : ");
    scanf("%d", &n);
    k = sum_digits(n);
    printf("%d", k);
}
int sum_digits(int n)
{
    int s, k;
    k = n % 10;
    if (n<10)
    {
        return n;
    }
    s = k + sum_digits(n/10);
    return s;
}