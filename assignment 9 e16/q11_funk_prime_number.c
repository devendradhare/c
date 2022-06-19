#include <stdio.h>
int check_prime(int);
int main()
{
    int n, re;
    printf("enter a number to check number is prime or not : ");
    scanf("%d", &n);
    re = check_prime(n);
    if (re == 1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }
    getch();
}

int check_prime(int num)
{
    int i, b;
    b = num / 2;
    for (i = b; i >= 2; i--)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    if (i <= 1)
    {
        return 1;
    }
}