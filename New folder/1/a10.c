#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("\naverage of any three numbers\n\nenter any three numbers : ");
    scanf("%f%f%f", &a,&b,&c);
    printf("\naverage of three numbers = %f",(a+b+c)/3.0);
    getch();
}