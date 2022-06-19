#include <stdio.h>
int char_index(char str[], char a);
int main()
{
    char str[100], a;
    int index;
    printf("enter string : ");
    gets(str);
    printf("\nenter a charactor for find its first index : ");
    scanf("%c", &a);

    index = char_index(str, a);

    if (index == -1)
    {
        printf("\n%c is not found in entered string");
    }
    else
    {
        printf("\nfirst index of %c is = %d", a, index);
    }
}
int char_index(char str[], char a)
{
    int i, index = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == a)
        {
            index = i;
            return index;
        }
    }
    if (str[i] == '\0')
    {
        return -1;
    }
}