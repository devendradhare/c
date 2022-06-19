#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],str[10];
    int length;
    printf("enter string : ");
    gets(s);
    printf("\nenter another string : ");
    gets(str);

    length = strlen(s);
    printf("\ns = %d\tstr = %d",length,strlen(str));
}