main()
{
	int i, j, k, n;
	printf("star pattern\nenter number of line");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1, k = n * 2 - 1; j <= n * 2 - 1; j++, k--)
		{
			if (j >= i && k >= i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
