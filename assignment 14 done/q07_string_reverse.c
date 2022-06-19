#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("enter string : ");
    gets(s);
    strrev(s);
    printf("\n%s",s);}