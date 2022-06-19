main()
{
	int a, r = 0;
	printf("sum of digits in a number\nEnter a number : ");
	scanf("%d", &a);

	while (1)
	{
		r += a % 10;
		a = a / 10;
		if (a < 10)
		{
			r += a;
			break;
		}
	}
	printf("	%d", r);
}