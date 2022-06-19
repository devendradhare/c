#include <stdio.h>
#include <conio.h>
main()
{
    float a, b;
    char n;
    while (1)
    {
        printf("\nselect one\na. Addition\nb. subtraction\nc. multiplication\nd. division\ne. exit\n  : ");
        scanf("%c", &n);
        switch (n)
        {
        case 'a':
            printf("\naddition\nenter two numbers : ");
            scanf("%f%f", &a, &b);
            printf("\n%f + %f =%f\n", a, b, a + b);
            getch();
            break;
        case 'b':
            printf("\nsubtraction\nenter tow number : ");
            scanf("%f%f", &a, &b);
            printf("\n%f - %f =%f\n", a, b, a - b);
            getch();
            break;
        case 'c':
            printf("\nmultiplication\nenter two number");
            scanf("%f%f", &a, &b);
            printf("\n%f * %f =%f\n", a, b, a * b);
            getch();
            break;
        case 'd':
            printf("\ndivision\nenter two number");
            scanf("%f%f", &a, &b);
            printf("\n%f / %f =%f\n", a, b, a / b);
            getch();
            break;
        case 'e':
            printf("exit");
            exit(0);
        default:
            printf("invalid input");
            getch();
            break;
        }
        printf("\nd %d c %c f %f",n,n,n);
    }
}
