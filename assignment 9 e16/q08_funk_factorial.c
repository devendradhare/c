#include<stdio.h>
int factorial(int);
int main()
{
    int n,re;
    printf("factorial of : ");
    scanf("%d",&n);
    re = factorial(n);
    printf("factorial of %d is %d",n,re);
}
int factorial(int a)
{
    int i,result=1;
    for(i=2;i<=a;i++)
    {
        result *= i;
    }
    return result;
}