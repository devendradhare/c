#include <stdio.h>
void frequency();
int main()
{
    int arr[10], as = 10, i;
    printf("enter elements in %d size array : ", as);
    for (i = 0; i < as; i++)
    {
        printf("\n%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    frequency(arr, as);
}
void frequency(int a[], int size)
{
    int i, count, j;
    for (j = 0; j < size; j++)
    {
        count = 0;
        for (i = 0; i < size; i++)
        {
            if (a[j] == a[i])
            {
                count++;
            }
        }
        printf("%d = %d\n", a[j], count);
    }
}