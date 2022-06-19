#include <stdio.h>
int main()
{
    char s[100], t, a;
    int i;
    printf("enter string : ");
    gets(s);

    for (i = 0; s[i]; i++)
    {}
    a = i;
    i--;
    for (; i >= a / 2; i--)
    {
        t = s[i];
        s[i] = s[a-i-1];
        s[a-i-1] = t;
    }

    printf("revers string : %s",s);
}