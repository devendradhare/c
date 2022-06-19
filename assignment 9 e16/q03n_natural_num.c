#include<conio.h>
#include<stdio.h>
int print_natural_number(int );
int main()
{
    int n;
    printf("N natural number\nenter N : ");
    scanf("%d",&n);
    print_natural_number(n);
    getch();
}

int print_natural_number(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d ",i);
    }
}