// program to input a character from keyboard and print its ASCII code
#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("\ncharacters ascii code\nenter a character here : ");
    scanf("%c", &a );
    printf("ASCII code of %c is %d",a,a);
    getch();
}