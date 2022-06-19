// this program is find greater number among three numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("\nfind greater number among three number\nenter any three number : ");
    scanf("%d%d%d", &a,&b,&c);
    printf("\n%d is greater",a>b?a>c?a:c:b>c?b:c);
    getch();
}