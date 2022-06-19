// this program is print 10 even natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("\n10 even natural numbers in reverse order");
    for(i = 1;i <= 10;i++)
    {
        printf("\n%d",(10*2)-(i*2-2));
    }
    getch();
}