// this program is print N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i;
    printf("\nprint N natural numbers in reverse order\nenter N : ");
    scanf("%d",&N);
    for(i = N;i>0;i--)
    {
        printf("\n%d",i);
    }
    getch();
}