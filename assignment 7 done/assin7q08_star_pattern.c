main()
{
    int i, j, n, k, l, g;
    printf("star pattern\nenter number of lines : ");
    scanf("%d", &n);

    g = n;
    for (i = 1; i <= n; i++)
    {
        k = 0;
        g--;
        for (l = g; l >= 1; l--)
        {
            printf(" ");
        }
        for (j = 1;;)
        {
            printf("%d", j);
            if (j == i || k == 1)
            {
                k = 1;
                j--;
                if (j <= 0)
                {
                    break;
                }
            }
            else
            {
                j++;
            }
        }
        printf("\n");
    }
    getch();
}