main()
{
    int i, j, n, k;
    printf("star pattern\nenter number of line : ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1, k = n * 2 - 1; j <= n * 2 - 1; k--, j++)
        {
            if (i <= j && i <= k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}