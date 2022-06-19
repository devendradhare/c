main()
{
    int n,i=1,f= 1;
    printf("Factorial of = : ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("factorial of %d is = %d",n,f);
}