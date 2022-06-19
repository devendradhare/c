#include <stdio.h>
int main()
{
    int arr[10], i, j, a;
    printf("enter any 10 numbers :\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nenterd array : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    for (j = 9; j >= 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                a = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = a;
            }
        }
    }
    printf("\nsort array : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}