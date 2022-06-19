#include<stdio.h>
int main()
{
    int arr[10], sum = 0,i;
    printf("this is an array\nenter any 10 numbers to get avrage : ");
    for(i=0;i<10;i++)
    {
        printf("\n%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        sum += arr[i];
    }
    printf("average is %d",sum/10);
}