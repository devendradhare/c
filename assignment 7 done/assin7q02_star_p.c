main()
{
	int i, j, n;
	printf("star pattern\nenter numbers of lines : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i <= j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
