#include<stdio.h>
int print_even_num(int);
int main()
{
    int n;
    printf("first N natural number\nenter N : ");
    scanf("%d",&n);
    print_even_num(n);
}
int print_even_num(int a)
{
    int i;
    for(i=0;i<=a;i++)
    {
        printf("%d ",i+i);
    }
}