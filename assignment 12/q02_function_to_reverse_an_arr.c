#include <stdio.h>
void reverse();
void display();
int main()
{
    int arr[11], i, t;
    printf("enter numbers in array : ");
    for (i = 0; i < 11; i++)
    {
        printf("\n%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nyou entered :   ");
    display(arr, 11);

    reverse(arr, 11);

    printf("\nafter reverse : ");
    display(arr, 11);
}

void display(int a[], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
}

void reverse(int a[], int s)
{
    int t, i, b = s / 2;
    for (i = 0; i < b; i++)
    {
        t = a[i];
        a[i] = a[s - 1 - i];
        a[s - 1 - i] = t;
    }
}