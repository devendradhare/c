#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("sum of 10 numbers\nenter any 10 numbers : ");
    for(i=0;i<10;i++)
    {
        printf("\n%d : ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("sum of 10 numbers is %d",sum);
}