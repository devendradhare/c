#include <stdio.h>
int main()
{
    int arr[10], i, sumeven=0, sumodd=0;
    printf("enter any 10 numbers : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d : ",i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2)
        {
            sumodd += arr[i];
        }
        else
        {
            sumeven += arr[i];
        }
    }
    printf("sum of all even numbers = %d\nsum of all odd numbers  = %d",sumeven,sumodd);
}