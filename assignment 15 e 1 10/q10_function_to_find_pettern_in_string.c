#include <stdio.h>
void find_pettern(char str[], char pettern[]);
int main()
{
    char str[100], pettern[20];
    printf("enter a string to find pettern : ");
    gets(str);
    printf("\nenter a petern to find : ");
    gets(pettern);
    find_pettern(str, pettern);
}
void find_pettern(char str[], char pettern[])
{
    int i, petternL, k;
    for (i = 0; pettern[i]; i++){}
    i--;
    petternL = i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == pettern[0])
        {
            for (k = 0; pettern[k]; k++)
            {
                if (str[i + k] == pettern[k])
                {
                    if (pettern[k + 1] == 0)
                    {
                        printf("\n = %d =",i);
                    }
                }
            }
        }
    }
}