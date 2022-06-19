// this program is find greater number between two numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\ngreater number between two numbers\nenter any two numberas : ");
    scanf("%d%d",&a,&b);
    printf("\n%d is greater",a>b?a:b);
    getch();
}