#include<stdio.h>
int sum_even_num(int a);
int main()
{
    int n,k;
    printf("sum of first n even natural numbers\nenter n : ");
    scanf("%d",&n);
    k = sum_even_num(n);
    printf("%d",k);
}
int sum_even_num(int a)
{
    // int s=0;
    // if (a==0)
    // {
    //     return 0;
    // }
    // s = a+a+sum_even_num(a-1);
    // return s;
    return a*(a+1);
}