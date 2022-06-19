// program to check whether a given number is divisible by 5 or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("\ncheck number is divisible by 5 or not\nenter a number : ");
    scanf("%d",&a);
    if (a%5)
    {
        printf("\n%d is not divisible by 5",a);
    }
    else
    {
        printf("\n%d is divisible by 5",a);
    }
    getch();
    
}