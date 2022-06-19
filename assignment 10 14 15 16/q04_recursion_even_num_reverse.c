#include<stdio.h>
int even_rev(int n);
int main()
{
    int n;
    printf("n even number in reverse order\nenter n : ");
    scanf("%d",&n);
    even_rev(n);
}
int even_rev(int n)
{
    if (n==0)
    {
        return 0;
    }
    printf("%d ",n+n);
    even_rev(n-1);
}