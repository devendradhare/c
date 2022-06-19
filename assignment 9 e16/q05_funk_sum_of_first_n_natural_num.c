#include<stdio.h>
int sum_first_n_num(int);
int main()
{
    int n,result;
    printf("sum of first N natural numbers\nenter value of N : ");
    scanf("%d",&n);
    result = sum_first_n_num(n);
    printf("\nsum of first %d natural number is %d\n",n,result);
}
int sum_first_n_num(int a)
{
    int i,j=0;
    for(i=1;i<=a;i++)
    {
        j+=i;
    }
    return j;
}