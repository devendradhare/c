#include <stdio.h>
int reverse_num(int n);
int main()
{
    int n, k;
    printf("revrse a number\nenter a number : ");
    scanf("%d", &n);
    k = reverse_num(n);
    printf("%d", k);
}
int reverse_num(int n)
{
    int r,s = 0;
    if (n < 10)
    {
        return n;
    }
    r = (n % 10);
    s = s * 10 + r;
    reverse_num(n/10);
    return s;
}