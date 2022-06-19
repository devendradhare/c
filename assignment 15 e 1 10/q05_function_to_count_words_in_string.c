#include <stdio.h>
int count_words(char asdf[]);
int main()
{
    char asdf[100];
    int w;
    printf("\nenter string : ");
    gets(asdf);
    w = count_words(asdf);
    printf("\ntotal worlds in string = %d", w);
    getch();
}

int count_words(char asdf[])
{
    int i, cnt = 0;
    for (i = 0; asdf[i]; i++)
    {
        if (asdf[i] == 32 && asdf[i + 1] != 32 && asdf[i + 1] != 0)
        {
            cnt += 1;
        }
    }
    return cnt + 1;
}