// program to print a given number but without last digit
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("printing given number but without last digit\nplease enter a number : ");
    scanf("%d",&a);
    printf("without last digit = %d",a/10);
    getch();
}