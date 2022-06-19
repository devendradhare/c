#include <stdio.h>
int main()
{
	int N,i = 1;
	printf("first N natural numbers\nEnter N : ");	scanf("%d",&N);

	while (N >= i)
	{
		printf(" %d ",N+1-i);
		i++;
	}
}

/*

int main()
{
	int N,i = 0;
	printf("first N natural numbers\nEnter N : ");	scanf("%d",&N);

	while (N >= i)
	{
		printf(" %d ",N);
		N--;
	}
}

*/