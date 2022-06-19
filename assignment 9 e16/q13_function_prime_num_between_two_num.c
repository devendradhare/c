#include<stdio.h>
int between_prime(int,int);
int main()
{
    int a,b;
    printf("prime number between two numbers\nenter two number");
    scanf("%d%d",&a,&b);
    between_prime(a,b);
    getch();
}
int between_prime(int x,int y)
{
    int i,j,sno=0;
    for(i=x;i<=y;i++)
    {
        j=i/2;
        for(j;j>=2;j--)
        {
            if (i%j==0)
            {
                break;
            }
        }
        if (j<=1)
        {
            sno++;
            printf("%d      %d \n",sno,i);
        }
    }
}