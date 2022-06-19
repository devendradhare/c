#include<stdio.h>
int main()
{
    char str[50];
    int i;
    printf("enter string : ");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i] -= 32;
        }
    }
    printf("\n%s",str);
}