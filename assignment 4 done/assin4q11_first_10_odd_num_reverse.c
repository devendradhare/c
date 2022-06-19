#include <stdio.h>
int main()
{
	int n,i = 1;
	printf("first N odd natural number\nEnter N : : ");
	scanf("%d",&n);
	n*=2;
	while (n >= i)
	{
		printf(" %d ",i);
		i+=2;
	}
}

