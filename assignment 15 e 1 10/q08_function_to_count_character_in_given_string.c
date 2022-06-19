#include <stdio.h>
int char_count(char str[], char a);
int main()
{
    char str[100], a;
    int count;
    printf("enter string : ");
    gets(str);
    printf("\nenter a charactor for count : ");
    scanf("%c", &a);

    count = char_count(str,a);



    printf("entered string : %s", str);
    printf("\nnumber of charactore %c is = %d",a,count);
}
int char_count(char str[], char a)
{
    int i, count = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == a)
        {
            count += 1;
        }
    }
    return count;
}