// this program is print 10 odd natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("\nfirst 10 odd natural numbers in reverse order");
    for(i = 10;i > 0;i--)
    {
        printf("\n%d",i+i-1);
    }
}