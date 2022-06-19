#include<stdio.h>
int next_primenum(int);
int main()
{
    int n,result;
    printf("next prime number : ");
    scanf("%d",&n);
    result = next_primenum(n);
    printf("%d is next prime number",result);
}

int next_primenum(int num)
{
    int i,j;
    for(i=num;;i++)
    {
        for(j=i/2;j>=2;j--)
        {
            if (i%j==0)
            {
                break;
            }
        }
        if (j<=1)
        {
            return i;
        }
    }
}