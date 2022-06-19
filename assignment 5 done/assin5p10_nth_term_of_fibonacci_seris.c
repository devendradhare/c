main()
{
    int a=-1,b=1,c,i,n;
    printf("Nth term of fibonacci serise\nenter N : ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("Nth term of fibonacci serise is %d",c);
}