// this program is print N odd natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i;
    printf("\nprint first N odd nutural numbers in reverse order\nenter value of N : ");
    scanf("%d",&N);
    for(i = N;i > 0;i--)
    {
        printf(" %d",i*2-1);
    }
    getch();
}