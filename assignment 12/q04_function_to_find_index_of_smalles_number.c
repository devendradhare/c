#include <stdio.h>
int find_sort_index();
int main()
{
    int arr[10], as = 10, i, si;
    printf("\nenter number in 10 size of array : ");
    for (i = 0; i < as; i++)
    {
        printf("\n%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("you intered : ");
    for(i=0;i<as;i++)
    {
        printf("%d ",arr[i]);
    }
    si = find_sort_index(arr,as);
    printf("\nindex of sortest number is arr[%d] = %d",si,arr[si]);
}
int find_sort_index(int a[], int size)
{
    int i,ans=a[0],b;
    for(i=0;i<size;i++)
    {
        if(a[i]<ans)
        {
            ans=a[i];
            b=i;
        }
    }
    return b;
}