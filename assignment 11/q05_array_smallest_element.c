#include <stdio.h>
int main()
{
    int arr[10], g, i;
    printf("enter any 10 numbers :\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (g > arr[i])
        {
            g = arr[i];
        }
    }
    printf("smallest element is %d", g);
}