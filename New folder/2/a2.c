// swaping two numbers without therd veriable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 11, b = 20;
    a = a + b;
    b = a - b;
    a = a - b; 
    printf("\na = %d b = %d",a,b);

    a = 11;
    b = 20;
    a = a * b;                           // a = 11 * 20     220
    b = a / b;                           // b = 220 / 20    11
    a = a / b;                           // a = 220 / 11    20
    printf("\na = %d b = %d",a,b);
     
    getch();
}