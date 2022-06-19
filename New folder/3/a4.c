// program to check whether a given number is even or odd
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("this program is check whether a given number is even or odd without using %% operator\nenter a number : ");
    scanf("%d",&a);
    if (a/2*2==a)
    {
        printf("\n%d is a even number",a);
    }
    else
    {
        printf("\n%d is a odd number",a);
    }
    getch();
}