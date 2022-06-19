#include<stdio.h>
int n_even_num(int n);
int main()
{
    int n;
    printf("first n even number\nenter n : ");
    scanf("%d",&n);
    n_even_num(n);
}
int n_even_num(int n)
{
    if(n==0)
    {
        return 0;
    }
    n_even_num(n-1);
    printf("%d ",n+n);
}