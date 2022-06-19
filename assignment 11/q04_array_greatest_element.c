#include <stdio.h>
int main()
{
    int arr[10], i, g = 0;
    printf("enter any 10 numbers : ");
    for (i = 0; i < 10; i++)
    {
        printf("\n%d : ", i + 1);
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (g < arr[i])
        {
            g = arr[i];
        }
    }
    printf("greatest element is %d",g);
}