#include <stdio.h>
int main()
{
    char s[50];
    int i;
    printf("enter string : ");
    gets(s);
    for (i = 0; s[i]; i++)
    {
        if (s[i]>=65&&s[i]<=90)
        {
            s[i] += 32;
        }
        
    }
    printf("%s",s);
}