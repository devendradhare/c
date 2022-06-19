// this program is calculate sum of cubes of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,sum = 0;
    printf("\nsum of cubes of first N natural numbers \nenter value of N : ");
    scanf("%d",&N);
    for(i = 1;i <= N;i++)
    {
        sum += i*i*i;
    }
    printf("\nsum = %d",sum);
    getch();
}