main()
{
	int i = 1, N, r = 0;
	printf("sum of first N odd natural number\nenter N : ");
	scanf("%d", &N);

	while (i<=N*2)
	{
		r += i;
		printf(" %d + ", i);
		i += 2;
	}
	printf(" = %d",r);
}