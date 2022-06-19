// program to swap tow numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    // first method
    int a = 10,b = 20,t;
    t = a;
    a = b;
    b = t;
    printf("\na = %d b = %d",a,b);
    
    // second method
    a = 10;
    b = 20;

    a = a + b;
    b = a - b;
    a = a - b;
    printf("\na = %d b = %d",a,b);

    getch();
}