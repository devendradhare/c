main()
{
    int N, i, sum = 0;
    printf("\nsum of first N natural numbers\nenter value of N : ");
    scanf("%d", &N);
    for (i = 0; i <= N; i++)
    {
        sum += i;
    }
    printf("\nsum of %d natural numbers is = %d", N, sum);
}