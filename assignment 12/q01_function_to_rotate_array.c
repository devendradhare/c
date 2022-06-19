#include <stdio.h>
void rotate();
int main()
{
    int arr[10], t, i;
    printf("enter 10 numbers : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nyou entered :  ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    rotate(arr,10);

    printf("\nafter rotate : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}
void rotate(int arr[],int s)
{
    int i,t;
    t = arr[s-1];
    for(i=s-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=t;
}