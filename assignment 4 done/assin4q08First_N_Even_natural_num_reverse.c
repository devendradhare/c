#include <stdio.h>
int main()
{
	int n,i = 2;
	printf("first N even natural number\nEnter N : ");
	scanf("%d",&n);
	n*=2;
	while (n >= i)
	{
		printf(" %d ",n+2-i);
		i+=2;
	}
}

