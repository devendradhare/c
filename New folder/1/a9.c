#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,d;
    printf("\nsimple interest calculter\nenter initial principal balance : ");
    scanf("%f", &a);
    printf("\nenter annual interest rate : ");
    scanf("%f", &b);
    printf("\nenter time in year : ");
    scanf("%f", &c);
    printf("\nfinal amount = %f",(a*b*c)/100.0);
    getch();

}