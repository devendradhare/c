#include<stdio.h>
int n_natural_revers(int n);
int main()
{
    int n;
    printf("n natural number in revers order\nenter n : ");
    scanf("%d",&n);
    n_natural_revers(n);
}
int n_natural_revers(int n)
{
    printf("%d ",n);
    if (n==1)
    {
        return 0;  
    }
    n_natural_revers(n-1);
    printf("%d ",n);
}