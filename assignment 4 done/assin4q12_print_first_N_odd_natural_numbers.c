main()
{
    int N,i;
    printf("print first N odd natural number\nenter value of N : ");
    scanf("%d", &N);
    for(i = 1;i<=N;i++)
    {
        printf("\n%d",i+i-1);
    }
}