#include<stdio.h>
int odd(int m);
int main()
{
    int n;
    printf("first n odd numbers\nenter n : ");
    scanf("%d",&n);
    odd(n);
}
int odd(int m)
{
    if (m==0)
    {
        return 0;
    }
    odd(m-1);
    printf("%d ",m+m-1);
}