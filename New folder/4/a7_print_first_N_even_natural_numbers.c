// this program is print first N even natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i;
    printf("first N even natural numbers \nenter value of N : ");
    scanf("%d", &N);
    for(i = 1;i <= N;i++)
    {
        printf("\n%d",i+i);
    }
    getch();
}