main()
{
	int a;
	printf("enter a number to check number is even or odd : ");
	scanf("%d", &a);
	if (a/2 * 2 == a)
		printf("number is even");
	else
		printf("number is odd");
}
