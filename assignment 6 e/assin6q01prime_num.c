#include <stdio.h>
int main()
{
	int n, i;
	printf("Enter a number to check prime : ");
	scanf("%d", &n);
	i=n/2;

	for (i; i >= 2; i--)
	{
		if (n % i == 0)
		{
			printf("%d is not a prime number",n);
			break;
		}
	}
	if (i == 1)
		printf("%d is a prime number",n);
}