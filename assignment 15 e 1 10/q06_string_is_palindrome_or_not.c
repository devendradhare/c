#include <stdio.h>
int palindrome(char asdf[]);
int main()
{
    char asdf[100];
    int jkl;
    printf("\nenter string : ");
    gets(asdf);
    jkl = palindrome(asdf);
    if (jkl == 1)
    {
        printf("\nstring is palindrome");
    }
    else
    {
        printf("\nstring is not palindrome");
    }
}
int palindrome(char asdf[])
{
    int i, sl;
    for (i = 0; asdf[i]; i++)
    {
    }
    i--;
    sl = i;
    for (; i >= sl / 2; i--)
    {
        if (asdf[i] != asdf[sl - i])
        {
            break;
        }
    }
    i++;
    if (i == sl / 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// 012345678910
// abcdefedcba
