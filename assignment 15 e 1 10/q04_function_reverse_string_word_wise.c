#include <stdio.h>
void reverse();
int main()
{
    char asdf[100];
    printf("enter string : ");
    gets(asdf);
    reverse(asdf);
    printf("\nmain : __%s__", asdf);
    // printf("\nmain : __%s__", asdf);
    // printf("\nmain : __%s__", asdf);
    getch();
}
void reverse(char asdf[])
{
    int i, j, temp, wl, b = 0, k = 0, sl;
    for (i = 0; asdf[i]; i++)
        ;
    sl = i;
    for (i = sl; i != 0; i--)
    {
        asdf[i + 1] = asdf[i];
        if (i == 1)
        {
            asdf[1] = asdf[0];
            asdf[0] = ' ';
            asdf[sl + 2] = asdf[sl + 1];
            asdf[sl + 1] = ' ';
        }
        // printf("\n__%s__", asdf);
    }
    for (i = 0; asdf[i]; i++)
        ;
    sl = i-1;
    for (i = 0; asdf[i]; i++)
    {
        for (; asdf[i] != 32 && asdf[i]; i++)
        {
        }
        wl = i - b;
        for (j = b; j <= (b + (wl / 2)); j++, k++)
        {
            temp = asdf[i - k];
            asdf[i - k] = asdf[j];
            asdf[j] = temp;
        }
        k = 0;
        // printf("\nf : __%s__", asdf);
        b = i;
    }
    asdf[sl+1] = '\0';

    for(i=0 ;i<=sl/2;i++)
    {
        temp = asdf[i];
        asdf[i] = asdf[sl-i];
        asdf[sl-i] = temp;
    }
}
// 012345678910
// asdf fghj kl
// dsa hgf lkj

// jkl fgh asd