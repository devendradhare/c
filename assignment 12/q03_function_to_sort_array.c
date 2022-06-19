#include <stdio.h>
void display();
void sort();
int main()
{
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("\n%d : ",i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nyou entered  :  ");
    display(arr, 10);

    sort(arr, 10);
    printf("\nafter sorting : ");
    display(arr, 10);
}
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void sort(int ar[], int size)
{
    int i, j, t;
    for (i = size; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                t = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = t;
            }
        }
    }
}