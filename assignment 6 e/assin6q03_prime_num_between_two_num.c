main()
{
	int n = 1, i, a, b;
	printf("prime numbers between a and b\nEnter a and b : ");
	scanf("%d%d", &a, &b);

	while (b >= a)
	{
		for (i = a / 2; i >= 2; i--)
		{
			if(a % i == 0)
				break;
		}
		(i == 1) ? printf("  (%d)  %d\n", n++, a) : 0;
		a++;
	}
}