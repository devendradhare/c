#include <stdio.h>
#include <conio.h>
int main()
{
    float r;
    printf("\narea of circle\nenter radius of circle : ");
    scanf("%f", &r);
    printf("\ntotal area of circle = %f", (22 / 7.0) * r * r);
    getch();
}