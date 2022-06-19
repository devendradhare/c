#include <stdio.h>
int n_natural_num(int);
int main()
{
    int n;
    printf("first n natural number\nenter n : ");
    scanf("%d", &n);
    n_natural_num(n);
}
int n_natural_num(int n)
{
    if(n==0)
    {
        return 0;
    }
    n_natural_num(n-1);
    printf("%d ",n);
}