main()
{
	int i, j, n;
	printf("star pattern\nenter number of lines : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{ 
		for (j = n; j >= 1; j--)
		{
			if (i < j)
				printf(" ");
			else
				printf("* ");
		}
		printf("\n");
	}
}