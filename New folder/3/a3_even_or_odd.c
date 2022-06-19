// program to check whether a given number is even or odd
#include<stdio.h>
#include<conio.h>
int main()
{
    int a ;
    printf("\ncheck number is even or odd\nenter a number : ");
    scanf("%d",&a);
    if (a%2)
    {
        printf("\n%d is a odd number",a);
    }
    else
    {
        printf("\n%d is a even number",a);
    }
    getch();
    
    
}