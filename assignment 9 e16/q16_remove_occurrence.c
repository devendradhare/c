#include <stdio.h>
#include<conio.h>
int func_occurrence(int num, int digit);
int main()
{
    int num, digit, ans;
    printf("enter a number : ");
    scanf("%d", &num);

    printf("enter a digit to remove : ");
    scanf("%d", &digit);

    ans = func_occurrence(num, digit);
    printf("\n%d\n", ans);
    getch();
}

int func_occurrence(int num, int digit)
{
    int b = 0, sum = 0, t;
    t = num;
    while (1)
    {
        if (t % 10 != digit)
        {
            sum += t % 10;
            sum *= 10;
        }
        t /= 10;
        if (t <= 10)
        {
            sum += t;
            break;
        }
    }
    while (1)
    {
        b += sum%10;
        b *= 10;
        sum /= 10;
        if (sum<=10)
        {
            b += sum;
            break;
        }
    }
    return b;
}
