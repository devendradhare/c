main()
{
    int n,a=-1,b=1,c,i;
    printf("first n terms of fibonacci serise\nenter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    getch();
}