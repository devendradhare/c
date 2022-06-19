// this program is print first N natural numbers 
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i;
    printf("\nprint N natural numbers\nenter N : ");
    scanf("%d",&N);
    for(i = 1;i<=N;i++)
    {
        printf("\n%d",i);
    }
    getch();
}