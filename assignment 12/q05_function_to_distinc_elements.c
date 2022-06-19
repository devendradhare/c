#include<stdio.h>
void distinc();
int main()
{
    int arr[10],as = 10,i;
    printf("\nenter elements in array (size 10) : \n");
    for(i=0;i<as;i++)
    {
        printf("%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    distinc(arr,as);
}
void distinc(int a[],int size)
{
    int arr
}