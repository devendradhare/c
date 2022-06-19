main()
{
    int n, i = 1, j;
    printf("prime factors of N\nenter N : ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (n%i==0)
        {
            for(j=i/2;j>=2;j--)
            {
                if (i%j==0)
                    break;
            }
            if (j<=1)
            {
                printf(" %d",i);
            }            
        }
        i++;
    }
}