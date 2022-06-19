#include<stdio.h>
int sum_odd_num(int n);
int main()
{
    int n,k;
    printf("sum of first n odd natural number\nenter n : ");
    scanf("%d",&n);
    k = sum_odd_num(n);
    printf("%d",k);
}
int sum_odd_num(int n)
{
    // int s;
    // if (n==1)
    // {
    //     return 1;
    // }
    // s = n+n-1+sum_odd_num(n-1);
    // return s;
    return n*n;
}