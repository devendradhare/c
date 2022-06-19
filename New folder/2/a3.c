// this program is print the last digit of the number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("\nprinting last digit of the number\nplease enter any number : ");
    scanf("%d",&a);
    printf("\nlast digit = %d",a%10);
    getch();
}