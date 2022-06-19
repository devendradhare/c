// this program is print first N even natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i;
    printf("\nfirst N even natural numbers in reverse order\nenter value of N : ");
    scanf("%d",&N);
    for(i = N;i > 0;i--)
    {
        printf("\n%d",i+i);
    }
    getch();
}