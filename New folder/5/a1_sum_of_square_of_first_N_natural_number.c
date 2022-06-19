// this program is print sum of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,sum = 0;
    printf("\nsum of square of first N natural numbers\nenter value of N : ");
    scanf("%d",&N);
    for(i = 1;i <= N;i++)
    {
        sum += i*i;
    }
    printf("\n\nsum of square of first %d natural number is %d",N,sum);
    getch();
}