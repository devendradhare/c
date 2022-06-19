#include <stdio.h>
int odd_rev(int n);
int main()
{
    int a;
    printf("first n odd number in reverse order\nenter n : ");
    scanf("%d",&a);
    odd_rev(a);
}
int odd_rev(int n)
{
    if (n == 0)
    {
        return 0;
    }
    printf("%d ", n + n - 1);
    odd_rev(n - 1);
}