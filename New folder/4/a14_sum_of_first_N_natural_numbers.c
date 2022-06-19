// this program is print sum of first N naturla numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,sum= 0;
    printf("\nsum of first N naturla numbers\nenter value of N : ");
    scanf("%d",&N);
    for(i = 1;i<=N;i++)
    {
        sum += i;
    }
    printf("\nsum of first %d nautral numbers is %d",N,sum);
    getch();
}