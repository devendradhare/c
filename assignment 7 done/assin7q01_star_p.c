main()
{
	int i,j,n;
	printf("star pettern 1\nenter lines : ");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}