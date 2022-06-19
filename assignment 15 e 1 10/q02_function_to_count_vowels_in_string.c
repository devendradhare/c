#include <stdio.h>
void vowels_count();
int main()
{
    char str[500];
    printf("enter string : ");
    gets(str);
    vowels_count(str);
}

void vowels_count(char str[])
{
    int l, a = 0, e = 0, i = 0, o = 0, u = 0, other = 0, temp;
    for (l = 0; str[l]; l++)
    {
        if (str[l] <= 90 && str[l] >= 65)
            temp = str[l] + 32;
        else
            temp = str[l];

        switch (temp)
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;

        default:
            other++;
            break;
        }
    }
    printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d\nother = %d", a, e, i, o, u, other);
}



// Windows PowerShell Copyright (C) Microsoft Corporation. All rights reserved. PS Z:\c language\during mysirg.com> cd "z:\c language\during mysirg.com\assignment 15\" ; if ($?) { gcc q02_function_to_count_vowels_in_string.c -o q02_function_to_count_vowels_in_string } ; if ($?) { .\q02_function_to_count_vowels_in_string } enter string : Windows PowerShellws PowerShell