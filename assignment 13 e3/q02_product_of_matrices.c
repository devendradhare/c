#include <stdio.h>
int main()
{
    int a[3][3] = {{3, 6, 5}, {2, 7, 8}, {9, 4, 2}}, b[3][3], i, j, k, t, c = 0, r[3][3];

    printf("enter elements in matric b[3][3] : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("\na[3][3] : \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nb[3][3] : \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    for (k = 0; k < 3; k++)
    {
        for (j = 0; j < 3; j++)
        {
            c = 0;
            t = 0;
            for (i = 0; i < 3; i++)
            {
                t = a[k][i] * b[i][j];
                c += t;
                printf("%d * %d = %d      c += %d\n", a[k][i], b[i][j], t, c);
            }
            r[k][j] = c;
            printf("\n");
        }
    }

    printf("\nr[3][3] : \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
}

// a 0 0 * b 0 0    a 0 0 * b 0 1
// a 0 1 * b 1 0    a 0 1 * b 1 1
// a 0 2 * b 2 0    a 0 2 * b 2 1
// printf("enter elements in matric a[3][3] : ");
// for (i = 0; i < 3; i++)
// {
//     for (j = 0; j < 3; j++)
//     {
//         scanf("%d", &a[i][j]);
//     }
//     printf("\n");
// }