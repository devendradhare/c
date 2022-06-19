#include <stdio.h>
int funk_evenodd(int);
int main()
{
    int n, re;
    printf("check number is even or odd \nenter a number : ");
    scanf("%d", &n);
    re = funk_evenodd(n);
    if (re == 1)
        printf("%d is even", n);
    else
        printf("%d is odd", n);
}
int funk_evenodd(int a)
{
    if (a == a / 2 * 2)
        return 1;
    else
        return 0;
}