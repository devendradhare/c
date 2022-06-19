#include<stdio.h>
int capitalize_string();
int main()
{
    char asdf[100];
    printf("enter string : ");
    gets(asdf);
    capitalize_string(asdf);
    printf("\n%s",asdf);
}
int capitalize_string(char asdf[])
{
    int i;
    for(i=0;asdf[i];i++)
    {
        if (asdf[i]>=97&&asdf[i]<=122)
        {
            asdf[i] -= 32;
        }
    }
    return 0;
}