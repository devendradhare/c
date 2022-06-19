#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, l = 0;
    printf("enter string : ");
    gets(str);

    for (i = 0; str[i]; i++)
    {
        l++;
    }

    printf("length of entered string is %d", l);
}