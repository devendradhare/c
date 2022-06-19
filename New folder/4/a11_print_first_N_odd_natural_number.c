// this program is print first N natural number
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i;
    printf("\nfirst N odd natural numbers \nenter value of N : ");
    scanf(" %d",&N);
    for(i = 1;i <= N;i++)
    {
        printf(" %d",i+i-1);
    }
    getch();
}