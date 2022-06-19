// this program is print squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i;
    printf("\nprint squares of first N natural numbers\nenter value of N : ");
    scanf("%d",&N);
    for(i = 1;i <= N;i++)
    {
        printf("\n%d %d",i,i*i);
    }
    getch();
}