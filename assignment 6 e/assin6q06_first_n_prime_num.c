main()
{
	int n, i = 1, a;
	printf("First N prime number\nEnter N : ");
	scanf("%d", &n);

	while (n >= 1)
	{
		for (a = i / 2; a >= 2; a--)
		{
			if (i % a == 0)
				break;
		}
		if (a == 1)
		{
			printf("	%d	%d\n",n,i);
			n--;
		}
		i++;
	}
	getch();
}