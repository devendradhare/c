#include <stdio.h>
int main()
{
    char str[100], a;
    int i, count = 0;
    printf("enter string : ");
    gets(str);
    printf("\nenter a charactor for search : ");
    scanf("%c", &a);

    for (i = 0; str[i]; i++)
    {
        if (str[i] == a)
        {
            count += 1;
        }
    }

    printf("entered string : %s", str);
    printf("\nnumber of charactore %c is = %d",a,count);
}