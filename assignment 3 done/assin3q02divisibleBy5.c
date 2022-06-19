main()
{
	int a;
	printf("enter a number to check number is divisible by 5 or not : ");
	scanf("%d", &a);
	if (a % 5 == 0)
		printf("%d is divisible by 5", a);
	else
		printf("%d is not divisible by 5", a);
}
