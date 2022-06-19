main()
{
    int a=-1,b=1,c,i,n;
    printf("check N is a term of fibonacci serise or not\nenter N : ");
    scanf("%d",&n);

    for ( i = 0; i <=n; i++)
    {
        c=a+b;
        if (c==n)
        {
            printf("%d is a term of fibonacci serise",n);
            break;
        }
        a=b;
        b=c;
    }
    if (i>=n)
    {
        printf("%d is not a term of fibonacci serise",n);
    }
    
    
}